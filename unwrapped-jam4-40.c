        // Iteration 1
        X0 = _mm_load_pd(&A[a_index_base+0]);
        Y0 = _mm_load_pd(&B[b_index_base+0+0]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+0]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+0]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+0]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 2
        X1 = _mm_load_pd(&A[a_index_base+2]);
        Y0 = _mm_load_pd(&B[b_index_base+0+2]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+2]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+2]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+2]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 3
        X0 = _mm_load_pd(&A[a_index_base+4]);
        Y0 = _mm_load_pd(&B[b_index_base+0+4]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+4]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+4]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+4]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 4
        X1 = _mm_load_pd(&A[a_index_base+6]);
        Y0 = _mm_load_pd(&B[b_index_base+0+6]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+6]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+6]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+6]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 5
        X0 = _mm_load_pd(&A[a_index_base+8]);
        Y0 = _mm_load_pd(&B[b_index_base+0+8]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+8]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+8]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+8]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 6
        X1 = _mm_load_pd(&A[a_index_base+10]);
        Y0 = _mm_load_pd(&B[b_index_base+0+10]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+10]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+10]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+10]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 7
        X0 = _mm_load_pd(&A[a_index_base+12]);
        Y0 = _mm_load_pd(&B[b_index_base+0+12]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+12]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+12]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+12]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 8
        X1 = _mm_load_pd(&A[a_index_base+14]);
        Y0 = _mm_load_pd(&B[b_index_base+0+14]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+14]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+14]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+14]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 9
        X0 = _mm_load_pd(&A[a_index_base+16]);
        Y0 = _mm_load_pd(&B[b_index_base+0+16]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+16]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+16]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+16]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 10
        X1 = _mm_load_pd(&A[a_index_base+18]);
        Y0 = _mm_load_pd(&B[b_index_base+0+18]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+18]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+18]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+18]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 11
        X0 = _mm_load_pd(&A[a_index_base+20]);
        Y0 = _mm_load_pd(&B[b_index_base+0+20]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+20]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+20]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+20]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 12
        X1 = _mm_load_pd(&A[a_index_base+22]);
        Y0 = _mm_load_pd(&B[b_index_base+0+22]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+22]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+22]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+22]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 13
        X0 = _mm_load_pd(&A[a_index_base+24]);
        Y0 = _mm_load_pd(&B[b_index_base+0+24]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+24]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+24]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+24]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 14
        X1 = _mm_load_pd(&A[a_index_base+26]);
        Y0 = _mm_load_pd(&B[b_index_base+0+26]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+26]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+26]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+26]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 15
        X0 = _mm_load_pd(&A[a_index_base+28]);
        Y0 = _mm_load_pd(&B[b_index_base+0+28]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+28]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+28]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+28]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 16
        X1 = _mm_load_pd(&A[a_index_base+30]);
        Y0 = _mm_load_pd(&B[b_index_base+0+30]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+30]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+30]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+30]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 17
        X0 = _mm_load_pd(&A[a_index_base+32]);
        Y0 = _mm_load_pd(&B[b_index_base+0+32]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+32]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+32]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+32]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 18
        X1 = _mm_load_pd(&A[a_index_base+34]);
        Y0 = _mm_load_pd(&B[b_index_base+0+34]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+34]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+34]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+34]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 19
        X0 = _mm_load_pd(&A[a_index_base+36]);
        Y0 = _mm_load_pd(&B[b_index_base+0+36]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+36]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+36]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+36]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 20
        X1 = _mm_load_pd(&A[a_index_base+38]);
        Y0 = _mm_load_pd(&B[b_index_base+0+38]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+40+38]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+80+38]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+120+38]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

