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

#define BLOCK_SIZE 48
#define BLOCK_SIZE_48 48

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

void
basic_dgemm (const int lda, const int M, const int N, const int K, const double *A, const double *B, double *C)
{
  int i, j, k;
  int bs = BLOCK_SIZE;

  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      double dotprod = 0.0; /* Accumulates the sum of the dot-product */
      for (k = 0; k < K; k++) {
        int a_index, b_index;
        a_index = (i * K) + k; /* Compute index of A element */
        b_index = (j * K) + k; /* Compute index of B element */
        dotprod += A[a_index] * B[b_index]; /* Compute product of A and B */
      }
      int c_index = (j * lda) + i;
      C[c_index] = dotprod + C[c_index];
    }
  }
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
basic_48_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*BLOCK_SIZE_48;
      register int b_index_base = j*BLOCK_SIZE_48;

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

#include "unwrapped-jam4-48.c"
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
basic_40_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*40;
      register int b_index_base = j*40;

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

#include "unwrapped-jam4-40.c"
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
basic_32_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*32;
      register int b_index_base = j*32;

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

#include "unwrapped-jam4-32.c"
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
basic_24_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*24;
      register int b_index_base = j*24;

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

#include "unwrapped-jam4-24.c"
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
basic_22_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*22;
      register int b_index_base = j*22;

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

#include "unwrapped-jam4-22.c"
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
basic_16_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*16;
      register int b_index_base = j*16;

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

#include "unwrapped-jam4-16.c"
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
basic_8_dgemm (const int lda, const int M, const int N, const int K,
    const double *A,const double *B, double *C)
{
  int i, j;

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j=j+4)
    {
      __m128d A0; /* accumulators */
      __m128d A1;
      __m128d A2;
      __m128d A3;

      { /* begin scope A */
      register int a_index_base = i*8;
      register int b_index_base = j*8;

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

#include "unwrapped-jam4-8.c"
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
  __declspec(align(16))double A_temp[BLOCK_SIZE_48 * BLOCK_SIZE_48];
  __declspec(align(16))double B_temp[BLOCK_SIZE_48 * BLOCK_SIZE_48];

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

  if (K==48)
  {
    basic_48_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else if (K==40)
  {
    basic_40_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else if (K==32)
  {
    basic_32_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else if (K==24)
  {
    basic_24_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else if (K==22)
  {
    basic_22_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else if (K==16)
  {
    basic_16_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else if (K==8)
  {
    basic_8_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
  else
  {
    printf("%i %i %i\n", M, N, K);
    basic_dgemm (lda, M, N, K, A_temp, B_temp, C);
  }
}

void
matmult (const int lda, const double *A, const double *B, double *C)
{
  int i;

#pragma omp parallel for shared (lda,A,B,C) private (i)
  for (i = 0; i < lda; i += BLOCK_SIZE_48) {
    int j;
    for (j = 0; j < lda; j += BLOCK_SIZE_48) {
      int k;
      for (k = 0; k < lda; k += BLOCK_SIZE_48) {
        int M = MIN (BLOCK_SIZE_48, lda-i);
        int N = MIN (BLOCK_SIZE_48, lda-j);
        int K = MIN (BLOCK_SIZE_48, lda-k);

        dgemm_copy (lda, M, N, K, A+i+k*lda, B+k+j*lda, C+i+j*lda);
      }
    }
  }
}
