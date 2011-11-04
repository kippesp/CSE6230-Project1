        // Iteration 1
        X0 = _mm_load_pd(&A[a_index_base+0]);
        Y0 = _mm_load_pd(&B[b_index_base+0+0]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+0]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        // Prefetch mid-way-through B columns
        PREFETCH_T0(&B[b_index_base+64], K_BLOCK_SIZE*NUM_COLS/2*sizeof(double));

        Y2 = _mm_load_pd(&B[b_index_base+256+0]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+0]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 2
        X1 = _mm_load_pd(&A[a_index_base+2]);
        Y0 = _mm_load_pd(&B[b_index_base+0+2]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+2]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+2]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+2]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 3
        X0 = _mm_load_pd(&A[a_index_base+4]);
        Y0 = _mm_load_pd(&B[b_index_base+0+4]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+4]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+4]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+4]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 4
        X1 = _mm_load_pd(&A[a_index_base+6]);
        Y0 = _mm_load_pd(&B[b_index_base+0+6]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+6]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+6]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+6]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 5
        X0 = _mm_load_pd(&A[a_index_base+8]);
        Y0 = _mm_load_pd(&B[b_index_base+0+8]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+8]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+8]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+8]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 6
        X1 = _mm_load_pd(&A[a_index_base+10]);
        Y0 = _mm_load_pd(&B[b_index_base+0+10]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+10]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+10]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+10]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 7
        X0 = _mm_load_pd(&A[a_index_base+12]);
        Y0 = _mm_load_pd(&B[b_index_base+0+12]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+12]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+12]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+12]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 8
        X1 = _mm_load_pd(&A[a_index_base+14]);
        Y0 = _mm_load_pd(&B[b_index_base+0+14]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+14]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+14]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+14]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 9
        X0 = _mm_load_pd(&A[a_index_base+16]);
        Y0 = _mm_load_pd(&B[b_index_base+0+16]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+16]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+16]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+16]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 10
        X1 = _mm_load_pd(&A[a_index_base+18]);
        Y0 = _mm_load_pd(&B[b_index_base+0+18]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+18]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+18]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+18]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 11
        X0 = _mm_load_pd(&A[a_index_base+20]);
        Y0 = _mm_load_pd(&B[b_index_base+0+20]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+20]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+20]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+20]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 12
        X1 = _mm_load_pd(&A[a_index_base+22]);
        Y0 = _mm_load_pd(&B[b_index_base+0+22]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+22]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+22]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+22]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 13
        X0 = _mm_load_pd(&A[a_index_base+24]);
        Y0 = _mm_load_pd(&B[b_index_base+0+24]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+24]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+24]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+24]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 14
        X1 = _mm_load_pd(&A[a_index_base+26]);
        Y0 = _mm_load_pd(&B[b_index_base+0+26]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+26]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+26]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+26]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 15
        X0 = _mm_load_pd(&A[a_index_base+28]);
        Y0 = _mm_load_pd(&B[b_index_base+0+28]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+28]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+28]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+28]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 16
        X1 = _mm_load_pd(&A[a_index_base+30]);
        Y0 = _mm_load_pd(&B[b_index_base+0+30]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+30]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+30]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+30]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 17
        X0 = _mm_load_pd(&A[a_index_base+32]);
        Y0 = _mm_load_pd(&B[b_index_base+0+32]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+32]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+32]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+32]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 18
        X1 = _mm_load_pd(&A[a_index_base+34]);
        Y0 = _mm_load_pd(&B[b_index_base+0+34]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+34]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+34]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+34]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 19
        X0 = _mm_load_pd(&A[a_index_base+36]);
        Y0 = _mm_load_pd(&B[b_index_base+0+36]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+36]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+36]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+36]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 20
        X1 = _mm_load_pd(&A[a_index_base+38]);
        Y0 = _mm_load_pd(&B[b_index_base+0+38]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+38]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+38]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+38]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 21
        X0 = _mm_load_pd(&A[a_index_base+40]);
        Y0 = _mm_load_pd(&B[b_index_base+0+40]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+40]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+40]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+40]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 22
        X1 = _mm_load_pd(&A[a_index_base+42]);
        Y0 = _mm_load_pd(&B[b_index_base+0+42]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+42]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+42]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+42]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 23
        X0 = _mm_load_pd(&A[a_index_base+44]);
        Y0 = _mm_load_pd(&B[b_index_base+0+44]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+44]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+44]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+44]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 24
        X1 = _mm_load_pd(&A[a_index_base+46]);
        Y0 = _mm_load_pd(&B[b_index_base+0+46]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+46]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+46]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+46]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 25
        X0 = _mm_load_pd(&A[a_index_base+48]);
        Y0 = _mm_load_pd(&B[b_index_base+0+48]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+48]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+48]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+48]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 26
        X1 = _mm_load_pd(&A[a_index_base+50]);
        Y0 = _mm_load_pd(&B[b_index_base+0+50]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+50]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+50]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+50]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 27
        X0 = _mm_load_pd(&A[a_index_base+52]);
        Y0 = _mm_load_pd(&B[b_index_base+0+52]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+52]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+52]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+52]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 28
        X1 = _mm_load_pd(&A[a_index_base+54]);
        Y0 = _mm_load_pd(&B[b_index_base+0+54]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+54]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+54]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+54]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 29
        X0 = _mm_load_pd(&A[a_index_base+56]);
        Y0 = _mm_load_pd(&B[b_index_base+0+56]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+56]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+56]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+56]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 30
        X1 = _mm_load_pd(&A[a_index_base+58]);
        Y0 = _mm_load_pd(&B[b_index_base+0+58]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+58]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+58]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+58]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 31
        X0 = _mm_load_pd(&A[a_index_base+60]);
        Y0 = _mm_load_pd(&B[b_index_base+0+60]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+60]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+60]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+60]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 32
        X1 = _mm_load_pd(&A[a_index_base+62]);
        Y0 = _mm_load_pd(&B[b_index_base+0+62]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+62]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+62]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+62]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 33
        X0 = _mm_load_pd(&A[a_index_base+64]);
        Y0 = _mm_load_pd(&B[b_index_base+0+64]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+64]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+64]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+64]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 34
        X1 = _mm_load_pd(&A[a_index_base+66]);
        Y0 = _mm_load_pd(&B[b_index_base+0+66]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+66]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+66]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+66]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 35
        X0 = _mm_load_pd(&A[a_index_base+68]);
        Y0 = _mm_load_pd(&B[b_index_base+0+68]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+68]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+68]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+68]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 36
        X1 = _mm_load_pd(&A[a_index_base+70]);
        Y0 = _mm_load_pd(&B[b_index_base+0+70]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+70]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+70]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+70]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 37
        X0 = _mm_load_pd(&A[a_index_base+72]);
        Y0 = _mm_load_pd(&B[b_index_base+0+72]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+72]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+72]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+72]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 38
        X1 = _mm_load_pd(&A[a_index_base+74]);
        Y0 = _mm_load_pd(&B[b_index_base+0+74]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+74]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+74]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+74]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 39
        X0 = _mm_load_pd(&A[a_index_base+76]);
        Y0 = _mm_load_pd(&B[b_index_base+0+76]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+76]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+76]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+76]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 40
        X1 = _mm_load_pd(&A[a_index_base+78]);
        Y0 = _mm_load_pd(&B[b_index_base+0+78]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+78]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+78]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+78]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 41
        X0 = _mm_load_pd(&A[a_index_base+80]);
        Y0 = _mm_load_pd(&B[b_index_base+0+80]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+80]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+80]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+80]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 42
        X1 = _mm_load_pd(&A[a_index_base+82]);
        Y0 = _mm_load_pd(&B[b_index_base+0+82]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+82]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+82]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+82]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 43
        X0 = _mm_load_pd(&A[a_index_base+84]);
        Y0 = _mm_load_pd(&B[b_index_base+0+84]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+84]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+84]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+84]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 44
        X1 = _mm_load_pd(&A[a_index_base+86]);
        Y0 = _mm_load_pd(&B[b_index_base+0+86]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+86]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+86]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+86]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 45
        X0 = _mm_load_pd(&A[a_index_base+88]);
        Y0 = _mm_load_pd(&B[b_index_base+0+88]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+88]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+88]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+88]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 46
        X1 = _mm_load_pd(&A[a_index_base+90]);
        Y0 = _mm_load_pd(&B[b_index_base+0+90]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+90]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+90]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+90]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 47
        X0 = _mm_load_pd(&A[a_index_base+92]);
        Y0 = _mm_load_pd(&B[b_index_base+0+92]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+92]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+92]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+92]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 48
        X1 = _mm_load_pd(&A[a_index_base+94]);
        Y0 = _mm_load_pd(&B[b_index_base+0+94]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+94]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+94]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+94]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 49
        X0 = _mm_load_pd(&A[a_index_base+96]);
        Y0 = _mm_load_pd(&B[b_index_base+0+96]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+96]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+96]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+96]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 50
        X1 = _mm_load_pd(&A[a_index_base+98]);
        Y0 = _mm_load_pd(&B[b_index_base+0+98]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+98]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+98]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+98]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 51
        X0 = _mm_load_pd(&A[a_index_base+100]);
        Y0 = _mm_load_pd(&B[b_index_base+0+100]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+100]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+100]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+100]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 52
        X1 = _mm_load_pd(&A[a_index_base+102]);
        Y0 = _mm_load_pd(&B[b_index_base+0+102]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+102]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+102]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+102]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 53
        X0 = _mm_load_pd(&A[a_index_base+104]);
        Y0 = _mm_load_pd(&B[b_index_base+0+104]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+104]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+104]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+104]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 54
        X1 = _mm_load_pd(&A[a_index_base+106]);
        Y0 = _mm_load_pd(&B[b_index_base+0+106]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+106]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+106]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+106]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 55
        X0 = _mm_load_pd(&A[a_index_base+108]);
        Y0 = _mm_load_pd(&B[b_index_base+0+108]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+108]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+108]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+108]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 56
        X1 = _mm_load_pd(&A[a_index_base+110]);
        Y0 = _mm_load_pd(&B[b_index_base+0+110]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+110]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+110]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+110]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 57
        X0 = _mm_load_pd(&A[a_index_base+112]);
        Y0 = _mm_load_pd(&B[b_index_base+0+112]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+112]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+112]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+112]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 58
        X1 = _mm_load_pd(&A[a_index_base+114]);
        Y0 = _mm_load_pd(&B[b_index_base+0+114]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+114]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+114]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+114]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 59
        X0 = _mm_load_pd(&A[a_index_base+116]);
        Y0 = _mm_load_pd(&B[b_index_base+0+116]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+116]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+116]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+116]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 60
        X1 = _mm_load_pd(&A[a_index_base+118]);
        Y0 = _mm_load_pd(&B[b_index_base+0+118]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+118]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+118]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+118]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 61
        X0 = _mm_load_pd(&A[a_index_base+120]);
        Y0 = _mm_load_pd(&B[b_index_base+0+120]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+120]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+120]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+120]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 62
        X1 = _mm_load_pd(&A[a_index_base+122]);
        Y0 = _mm_load_pd(&B[b_index_base+0+122]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+122]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+122]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+122]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 63
        X0 = _mm_load_pd(&A[a_index_base+124]);
        Y0 = _mm_load_pd(&B[b_index_base+0+124]);
        B0 = _mm_mul_pd(X0, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+124]);
        B1 = _mm_mul_pd(X0, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+124]);
        B2 = _mm_mul_pd(X0, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+124]);
        B3 = _mm_mul_pd(X0, Y3);
        A3 = _mm_add_pd(A3, B3);

        // Iteration 64
        X1 = _mm_load_pd(&A[a_index_base+126]);
        Y0 = _mm_load_pd(&B[b_index_base+0+126]);
        B0 = _mm_mul_pd(X1, Y0);
        A0 = _mm_add_pd(A0, B0);

        Y1 = _mm_load_pd(&B[b_index_base+128+126]);
        B1 = _mm_mul_pd(X1, Y1);
        A1 = _mm_add_pd(A1, B1);

        
        

        Y2 = _mm_load_pd(&B[b_index_base+256+126]);
        B2 = _mm_mul_pd(X1, Y2);
        A2 = _mm_add_pd(A2, B2);

        Y3 = _mm_load_pd(&B[b_index_base+384+126]);
        B3 = _mm_mul_pd(X1, Y3);
        A3 = _mm_add_pd(A3, B3);

