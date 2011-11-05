        // Iteration 1
        X0 = _mm_load_pd(&A[a_index_base+0]);
        Y0 = _mm_load_pd(&B[b_index_base+0+0]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+0]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+0]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+0]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 2
        X1 = _mm_load_pd(&A[a_index_base+2]);
        Y0 = _mm_load_pd(&B[b_index_base+0+2]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+2]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+2]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+2]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 3
        X0 = _mm_load_pd(&A[a_index_base+4]);
        Y0 = _mm_load_pd(&B[b_index_base+0+4]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+4]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+4]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+4]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 4
        X1 = _mm_load_pd(&A[a_index_base+6]);
        Y0 = _mm_load_pd(&B[b_index_base+0+6]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+6]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+6]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+6]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 5
        X0 = _mm_load_pd(&A[a_index_base+8]);
        Y0 = _mm_load_pd(&B[b_index_base+0+8]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+8]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+8]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+8]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 6
        X1 = _mm_load_pd(&A[a_index_base+10]);
        Y0 = _mm_load_pd(&B[b_index_base+0+10]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+10]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+10]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+10]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 7
        X0 = _mm_load_pd(&A[a_index_base+12]);
        Y0 = _mm_load_pd(&B[b_index_base+0+12]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+12]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+12]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+12]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 8
        X1 = _mm_load_pd(&A[a_index_base+14]);
        Y0 = _mm_load_pd(&B[b_index_base+0+14]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+14]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+14]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+14]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 9
        X0 = _mm_load_pd(&A[a_index_base+16]);
        Y0 = _mm_load_pd(&B[b_index_base+0+16]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+16]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+16]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+16]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 10
        X1 = _mm_load_pd(&A[a_index_base+18]);
        Y0 = _mm_load_pd(&B[b_index_base+0+18]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+18]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+18]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+18]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 11
        X0 = _mm_load_pd(&A[a_index_base+20]);
        Y0 = _mm_load_pd(&B[b_index_base+0+20]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+20]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+20]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+20]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 12
        X1 = _mm_load_pd(&A[a_index_base+22]);
        Y0 = _mm_load_pd(&B[b_index_base+0+22]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+24+22]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+48+22]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+72+22]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

