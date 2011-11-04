/**
 *  \file matmult.c
 *  \brief Matrix Multiply file for Proj1
 *  \author Aparna Chandramowlishwaran <aparna@gatech...>, Kent Czechowski <kentcz@gatech...>, Rich Vuduc <richie@gatech...>
 */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <ia32intrin.h>

#include "matmult.h"


#define PREFETCH_T0(addr,nrOfBytesAhead) _mm_prefetch(((char *)(addr))+nrOfBytesAhead,_MM_HINT_T0)

/**
 *
 *  Matrix Multiply
 *   Computes C = A * B + C
 *
 *
 *  Similar to the DGEMM routine in BLAS
 *
 *
 **/

#define K_BLOCK_SIZE 128
#define M_BLOCK_SIZE 128
#define N_BLOCK_SIZE 128

#define MIN(a, b) (a < b) ? a : b

static void print_matrix(int rows, int cols, const double *mat) {

  int r, c;

  /* Iterate over the rows of the matrix */
  for (r = 0; r < rows; r++) {
    /* Iterate over the columns of the matrix */
    for (c = 0; c < cols; c++) {
      int index = (c * rows) + r;
      fprintf(stderr, "%.0lf ", mat[index]);
    } /* c */
    fprintf(stderr, "\n");
  } /* r */
}

/*
 * Additional optimizations to consider:
 *
 *  - remove MIN check on innerloop of matmult(); split 1 set of 3 loops into
 *    2 sets of 3 loops
 *  - non square block size
 *  - pad with zeros to for 2^N x 2^N size
 *
 */

void
basic_dgemm (const int lda, const int M, const int N, const int K, const double *A, const double *B, double *C)
{
  int i, j;

  PREFETCH_T0(&A[0], 256);
  PREFETCH_T0(&B[0], 256);

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*K_BLOCK_SIZE;
      register int b_index_base = j*K_BLOCK_SIZE;

      __m128d B0; /* accumulators */
      __m128d B1;
      __m128d B2;
      __m128d B3;

      __m128d X0; /* general purpose */
      __m128d X1;

      __m128d Y0; /* general purpose */
      __m128d Y1;
      __m128d Y2;
      __m128d Y3;

      A0 = _mm_setzero_pd();
      A1 = _mm_setzero_pd();
      A2 = _mm_setzero_pd();
      A3 = _mm_setzero_pd();

#include "unwrapped-jam4.c"
      } /* end scope A */

      A0 = _mm_hadd_pd(A0, A0);
      A1 = _mm_hadd_pd(A1, A1);
      A2 = _mm_hadd_pd(A2, A2);
      A3 = _mm_hadd_pd(A3, A3);

      { /* begin scope B */

      register int c_index_base = j * lda + i;
      __declspec(align(16)) double prodResult[8];

      _mm_store_pd(&prodResult[0], A0);
      _mm_store_pd(&prodResult[2], A1);
      _mm_store_pd(&prodResult[4], A2);
      _mm_store_pd(&prodResult[6], A3);

      C[c_index_base]         += prodResult[0];
      C[c_index_base + lda]   += prodResult[2];
      C[c_index_base + 2*lda] += prodResult[4];
      C[c_index_base + 3*lda] += prodResult[6];

      } /* end scope B */
    }
  }

  //puts("A_temp=");
  //print_matrix(M, K, A_temp);

  //puts("B_temp=");
  //print_matrix(K, N, B_temp);

  //puts("C=");
  //print_matrix(M, N, C);
}

void
dgemm_copy (const int lda, const int M, const int N, const int K, const double *A, const double *B, double *C)
{
  //puts("A=");
  //print_matrix(M, K, A);

  //puts("B=");
  //print_matrix(K, N, B);

  int i, j, k;
  __declspec(align(16))double A_temp[K_BLOCK_SIZE * M_BLOCK_SIZE];
  __declspec(align(16))double B_temp[K_BLOCK_SIZE * N_BLOCK_SIZE];

  /* Copy and transpose matrix A into cache */
  for (k = 0; k < K; k++) {
    for (i = 0; i < M; i++) {
      A_temp[k + i*K] = A[i + k*lda];
    }
  }

  /* Copy matrix B into cache */
  for (j = 0; j < N; j++) {
    for (k = 0; k < K; k++) {
      B_temp[k + j*K] = B[k + j*lda];
    }
  }

  basic_dgemm (lda, M, N, K, A_temp, B_temp, C);
}

void
matmult (const int lda, const double *A, const double *B, double *C)
{
  int i;

#pragma omp parallel for shared (lda,A,B,C) private (i)
  for (i = 0; i < lda; i += M_BLOCK_SIZE) {
    int j;
    for (j = 0; j < lda; j += N_BLOCK_SIZE) {
      int k;
      for (k = 0; k < lda; k += K_BLOCK_SIZE) {
        int M = MIN (M_BLOCK_SIZE, lda-i);
        int N = MIN (N_BLOCK_SIZE, lda-j);
        int K = MIN (K_BLOCK_SIZE, lda-k);

        dgemm_copy (lda, M, N, K, A+i+k*lda, B+k+j*lda, C+i+j*lda);
      }
    }
  }
}
