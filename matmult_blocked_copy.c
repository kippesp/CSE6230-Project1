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

#define K_BLOCK_SIZE 48
#define M_BLOCK_SIZE 48
#define N_BLOCK_SIZE 48

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
  int i, j, k;

  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      int a_index, b_index;
      __m128d A0;
      __m128d X0;
      __m128d X1;
      __m128d X2;
      __m128d X3;
      __m128d X4;
      __m128d X5;
      __m128d Y0;
      __m128d Y1;
      __m128d Y2;
      __m128d Y3;
      __m128d Y4;
      __m128d Y5;

      A0 = _mm_setzero_pd();

      a_index = (i * K);
      b_index = (j * K);

#include "unwrapped.c"

      int c_index = (j * lda) + i;
      __declspec(align(16)) double prodResult[2];

      A0 = _mm_hadd_pd(A0, A0);
      _mm_store_pd(prodResult, A0);
      C[c_index] = prodResult[0] + C[c_index];
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
