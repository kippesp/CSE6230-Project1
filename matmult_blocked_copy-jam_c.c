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
#define BLOCK_SIZE 48
#endif

#define MIN(a, b) (a < b) ? a : b

void 
basic_dgemm (const int lda, const int M, const int N, const int K, const double *A, const double *B, double *C)
{
  int i, j, k;
  int bs = BLOCK_SIZE;

  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j=j+2) {
      double dotprod1 = 0.0; /* Accumulates the sum of the dot-product */
      double dotprod2 = 0.0; /* Accumulates the sum of the dot-product */

      for (k = 0; k < K; k++) {
        int a_index, b_index1, b_index2;

        a_index = (i * K) + k; /* Compute index of A element */
        b_index1 = (j * K) + k; /* Compute index of B element */
        b_index2 = ((j+1) * K) + k; /* Compute index of B element */
        dotprod1 += A[a_index] * B[b_index1]; /* Compute product of A and B */
        dotprod2 += A[a_index] * B[b_index2]; /* Compute product of A and B */
      }
      int c_index1 = (j * lda) + i;
      int c_index2 = ((j+1) * lda) + i;
      C[c_index1] = dotprod1 + C[c_index1];
      C[c_index2] = dotprod2 + C[c_index2];
    } 
  } 
}

void 
dgemm_copy (const int lda, const int M, const int N, const int K, const double *A, const double *B, double *C)
{
  int i, j, k;
  double A_temp[BLOCK_SIZE * BLOCK_SIZE];
  double B_temp[BLOCK_SIZE * BLOCK_SIZE];
 
  /* Copy matrix A into cache */  
  for (i = 0; i < K; i++) {
    for (j = 0; j < M; j++) {
      A_temp[i + j*K] = A[j + i*lda];
    }
  }

  /* Copy matrix B into cache */
  for (i = 0; i < N; i++) {
    for (j = 0; j < K; j++) {
      B_temp[j + i*K] = B[j + i*lda];
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
