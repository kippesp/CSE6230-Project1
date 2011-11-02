        // Iteration 1
        X0 = _mm_load_pd(&A[a_index+0]);
        Y0 = _mm_load_pd(&B[b_index+0]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 2
        X1 = _mm_load_pd(&A[a_index+2]);
        Y1 = _mm_load_pd(&B[b_index+2]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 3
        X2 = _mm_load_pd(&A[a_index+4]);
        Y2 = _mm_load_pd(&B[b_index+4]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 4
        X3 = _mm_load_pd(&A[a_index+6]);
        Y3 = _mm_load_pd(&B[b_index+6]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 5
        X4 = _mm_load_pd(&A[a_index+8]);
        Y4 = _mm_load_pd(&B[b_index+8]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 6
        X0 = _mm_load_pd(&A[a_index+10]);
        Y0 = _mm_load_pd(&B[b_index+10]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 7
        X1 = _mm_load_pd(&A[a_index+12]);
        Y1 = _mm_load_pd(&B[b_index+12]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 8
        X2 = _mm_load_pd(&A[a_index+14]);
        Y2 = _mm_load_pd(&B[b_index+14]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 9
        X3 = _mm_load_pd(&A[a_index+16]);
        Y3 = _mm_load_pd(&B[b_index+16]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 10
        X4 = _mm_load_pd(&A[a_index+18]);
        Y4 = _mm_load_pd(&B[b_index+18]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 11
        X0 = _mm_load_pd(&A[a_index+20]);
        Y0 = _mm_load_pd(&B[b_index+20]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 12
        X1 = _mm_load_pd(&A[a_index+22]);
        Y1 = _mm_load_pd(&B[b_index+22]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 13
        X2 = _mm_load_pd(&A[a_index+24]);
        Y2 = _mm_load_pd(&B[b_index+24]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 14
        X3 = _mm_load_pd(&A[a_index+26]);
        Y3 = _mm_load_pd(&B[b_index+26]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 15
        X4 = _mm_load_pd(&A[a_index+28]);
        Y4 = _mm_load_pd(&B[b_index+28]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 16
        X0 = _mm_load_pd(&A[a_index+30]);
        Y0 = _mm_load_pd(&B[b_index+30]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 17
        X1 = _mm_load_pd(&A[a_index+32]);
        Y1 = _mm_load_pd(&B[b_index+32]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 18
        X2 = _mm_load_pd(&A[a_index+34]);
        Y2 = _mm_load_pd(&B[b_index+34]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 19
        X3 = _mm_load_pd(&A[a_index+36]);
        Y3 = _mm_load_pd(&B[b_index+36]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 20
        X4 = _mm_load_pd(&A[a_index+38]);
        Y4 = _mm_load_pd(&B[b_index+38]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 21
        X0 = _mm_load_pd(&A[a_index+40]);
        Y0 = _mm_load_pd(&B[b_index+40]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 22
        X1 = _mm_load_pd(&A[a_index+42]);
        Y1 = _mm_load_pd(&B[b_index+42]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 23
        X2 = _mm_load_pd(&A[a_index+44]);
        Y2 = _mm_load_pd(&B[b_index+44]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 24
        X3 = _mm_load_pd(&A[a_index+46]);
        Y3 = _mm_load_pd(&B[b_index+46]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);
