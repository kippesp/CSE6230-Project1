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
        X5 = _mm_load_pd(&A[a_index+10]);
        Y5 = _mm_load_pd(&B[b_index+10]);
        X5 = _mm_mul_pd(X5, Y5);
        A0 = _mm_add_pd(A0, X5);

        // Iteration 7
        X0 = _mm_load_pd(&A[a_index+12]);
        Y0 = _mm_load_pd(&B[b_index+12]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 8
        X1 = _mm_load_pd(&A[a_index+14]);
        Y1 = _mm_load_pd(&B[b_index+14]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 9
        X2 = _mm_load_pd(&A[a_index+16]);
        Y2 = _mm_load_pd(&B[b_index+16]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 10
        X3 = _mm_load_pd(&A[a_index+18]);
        Y3 = _mm_load_pd(&B[b_index+18]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 11
        X4 = _mm_load_pd(&A[a_index+20]);
        Y4 = _mm_load_pd(&B[b_index+20]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 12
        X5 = _mm_load_pd(&A[a_index+22]);
        Y5 = _mm_load_pd(&B[b_index+22]);
        X5 = _mm_mul_pd(X5, Y5);
        A0 = _mm_add_pd(A0, X5);

        // Iteration 13
        X0 = _mm_load_pd(&A[a_index+24]);
        Y0 = _mm_load_pd(&B[b_index+24]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 14
        X1 = _mm_load_pd(&A[a_index+26]);
        Y1 = _mm_load_pd(&B[b_index+26]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 15
        X2 = _mm_load_pd(&A[a_index+28]);
        Y2 = _mm_load_pd(&B[b_index+28]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 16
        X3 = _mm_load_pd(&A[a_index+30]);
        Y3 = _mm_load_pd(&B[b_index+30]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 17
        X4 = _mm_load_pd(&A[a_index+32]);
        Y4 = _mm_load_pd(&B[b_index+32]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 18
        X5 = _mm_load_pd(&A[a_index+34]);
        Y5 = _mm_load_pd(&B[b_index+34]);
        X5 = _mm_mul_pd(X5, Y5);
        A0 = _mm_add_pd(A0, X5);

        // Iteration 19
        X0 = _mm_load_pd(&A[a_index+36]);
        Y0 = _mm_load_pd(&B[b_index+36]);
        X0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, X0);

        // Iteration 20
        X1 = _mm_load_pd(&A[a_index+38]);
        Y1 = _mm_load_pd(&B[b_index+38]);
        X1 = _mm_mul_pd(X1, Y1);
        A0 = _mm_add_pd(A0, X1);

        // Iteration 21
        X2 = _mm_load_pd(&A[a_index+40]);
        Y2 = _mm_load_pd(&B[b_index+40]);
        X2 = _mm_mul_pd(X2, Y2);
        A0 = _mm_add_pd(A0, X2);

        // Iteration 22
        X3 = _mm_load_pd(&A[a_index+42]);
        Y3 = _mm_load_pd(&B[b_index+42]);
        X3 = _mm_mul_pd(X3, Y3);
        A0 = _mm_add_pd(A0, X3);

        // Iteration 23
        X4 = _mm_load_pd(&A[a_index+44]);
        Y4 = _mm_load_pd(&B[b_index+44]);
        X4 = _mm_mul_pd(X4, Y4);
        A0 = _mm_add_pd(A0, X4);

        // Iteration 24
        X5 = _mm_load_pd(&A[a_index+46]);
        Y5 = _mm_load_pd(&B[b_index+46]);
        X5 = _mm_mul_pd(X5, Y5);
        A0 = _mm_add_pd(A0, X5);
