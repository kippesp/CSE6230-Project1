        // Iteration 1
        X0 = _mm_load_pd(&A[a_index_base+0]);
        Y0 = _mm_load_pd(&B[b_index_base+0+0]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+8+0]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+16+0]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+24+0]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 2
        X1 = _mm_load_pd(&A[a_index_base+2]);
        Y0 = _mm_load_pd(&B[b_index_base+0+2]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+8+2]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+16+2]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+24+2]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 3
        X0 = _mm_load_pd(&A[a_index_base+4]);
        Y0 = _mm_load_pd(&B[b_index_base+0+4]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+8+4]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+16+4]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+24+4]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 4
        X1 = _mm_load_pd(&A[a_index_base+6]);
        Y0 = _mm_load_pd(&B[b_index_base+0+6]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+8+6]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+16+6]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+24+6]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

