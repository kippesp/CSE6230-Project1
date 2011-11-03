        // Iteration 1
        X0 = _mm_load_pd(&A[a_index_base+0]);
        Y0 = _mm_load_pd(&B[b_index_base+0+0]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+0]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+0]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+0]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 2
        X1 = _mm_load_pd(&A[a_index_base+2]);
        Y0 = _mm_load_pd(&B[b_index_base+0+2]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+2]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+2]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+2]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 3
        X0 = _mm_load_pd(&A[a_index_base+4]);
        Y0 = _mm_load_pd(&B[b_index_base+0+4]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+4]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+4]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+4]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 4
        X1 = _mm_load_pd(&A[a_index_base+6]);
        Y0 = _mm_load_pd(&B[b_index_base+0+6]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+6]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+6]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+6]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 5
        X0 = _mm_load_pd(&A[a_index_base+8]);
        Y0 = _mm_load_pd(&B[b_index_base+0+8]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+8]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+8]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+8]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 6
        X1 = _mm_load_pd(&A[a_index_base+10]);
        Y0 = _mm_load_pd(&B[b_index_base+0+10]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+10]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+10]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+10]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 7
        X0 = _mm_load_pd(&A[a_index_base+12]);
        Y0 = _mm_load_pd(&B[b_index_base+0+12]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+12]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+12]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+12]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 8
        X1 = _mm_load_pd(&A[a_index_base+14]);
        Y0 = _mm_load_pd(&B[b_index_base+0+14]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+14]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+14]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+14]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 9
        X0 = _mm_load_pd(&A[a_index_base+16]);
        Y0 = _mm_load_pd(&B[b_index_base+0+16]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+16]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+16]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+16]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 10
        X1 = _mm_load_pd(&A[a_index_base+18]);
        Y0 = _mm_load_pd(&B[b_index_base+0+18]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+18]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+18]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+18]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 11
        X0 = _mm_load_pd(&A[a_index_base+20]);
        Y0 = _mm_load_pd(&B[b_index_base+0+20]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+20]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+20]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+20]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 12
        X1 = _mm_load_pd(&A[a_index_base+22]);
        Y0 = _mm_load_pd(&B[b_index_base+0+22]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+22]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+22]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+22]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 13
        X0 = _mm_load_pd(&A[a_index_base+24]);
        Y0 = _mm_load_pd(&B[b_index_base+0+24]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+24]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+24]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+24]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 14
        X1 = _mm_load_pd(&A[a_index_base+26]);
        Y0 = _mm_load_pd(&B[b_index_base+0+26]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+26]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+26]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+26]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 15
        X0 = _mm_load_pd(&A[a_index_base+28]);
        Y0 = _mm_load_pd(&B[b_index_base+0+28]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+28]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+28]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+28]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 16
        X1 = _mm_load_pd(&A[a_index_base+30]);
        Y0 = _mm_load_pd(&B[b_index_base+0+30]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+30]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+30]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+30]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 17
        X0 = _mm_load_pd(&A[a_index_base+32]);
        Y0 = _mm_load_pd(&B[b_index_base+0+32]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+32]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+32]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+32]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 18
        X1 = _mm_load_pd(&A[a_index_base+34]);
        Y0 = _mm_load_pd(&B[b_index_base+0+34]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+34]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+34]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+34]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 19
        X0 = _mm_load_pd(&A[a_index_base+36]);
        Y0 = _mm_load_pd(&B[b_index_base+0+36]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+36]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+36]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+36]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 20
        X1 = _mm_load_pd(&A[a_index_base+38]);
        Y0 = _mm_load_pd(&B[b_index_base+0+38]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+38]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+38]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+38]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 21
        X0 = _mm_load_pd(&A[a_index_base+40]);
        Y0 = _mm_load_pd(&B[b_index_base+0+40]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+40]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+40]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+40]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 22
        X1 = _mm_load_pd(&A[a_index_base+42]);
        Y0 = _mm_load_pd(&B[b_index_base+0+42]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+42]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+42]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+42]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 23
        X0 = _mm_load_pd(&A[a_index_base+44]);
        Y0 = _mm_load_pd(&B[b_index_base+0+44]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+44]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+44]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+44]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 24
        X1 = _mm_load_pd(&A[a_index_base+46]);
        Y0 = _mm_load_pd(&B[b_index_base+0+46]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+48+46]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        Y2 = _mm_load_pd(&B[b_index_base+96+46]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+144+46]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

