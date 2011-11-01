/**
 *  \file matmult.c
 *  \brief Matrix Multiply file for Proj1
 *  \author Aparna Chandramowlishwaran <aparna@gatech...>, Kent Czechowski <kentcz@gatech...>, Rich Vuduc <richie@gatech...>
 */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

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

#if !defined (BLOCK_SIZE)
#define BLOCK_SIZE 64
#endif

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
  int bs = BLOCK_SIZE;

  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      register double dotprod = 0.0; /* Accumulates the sum of the dot-product */
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
  __declspec(align(16))double A_temp[BLOCK_SIZE * BLOCK_SIZE];
  __declspec(align(16))double B_temp[BLOCK_SIZE * BLOCK_SIZE];

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
  for (i = 0; i < lda; i += BLOCK_SIZE) {
    int j;
    for (j = 0; j < lda; j += BLOCK_SIZE) {
      int k;
      for (k = 0; k < lda; k += BLOCK_SIZE) {
        int M = MIN (BLOCK_SIZE, lda-i);
        int N = MIN (BLOCK_SIZE, lda-j);
        int K = MIN (BLOCK_SIZE, lda-k);

        dgemm_copy (lda, M, N, K, A+i+k*lda, B+k+j*lda, C+i+j*lda);
      }
    }
  }
}
