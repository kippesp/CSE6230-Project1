from string import Template

K = 128

def method_1():
    template = """\
        // Iteration $iteration1
        $x1 = _mm_load_pd(&A[$a_index_base+$index1]);
        $y1 = _mm_load_pd(&B[$b_index_base+$b_col_offset_1+$index1]);
        $b1 = _mm_mul_pd($x1, $y1);
        $a1 = _mm_add_pd($a1, $b1);

        $y2 = _mm_load_pd(&B[$b_index_base+$b_col_offset_2+$index1]);
        $b2 = _mm_mul_pd($x1, $y2);
        $a2 = _mm_add_pd($a2, $b2);

        $comment
        $prefetch_b

        $y3 = _mm_load_pd(&B[$b_index_base+$b_col_offset_3+$index1]);
        $b3 = _mm_mul_pd($x1, $y3);
        $a3 = _mm_add_pd($a3, $b3);

        $y4 = _mm_load_pd(&B[$b_index_base+$b_col_offset_4+$index1]);
        $b4 = _mm_mul_pd($x1, $y4);
        $a4 = _mm_add_pd($a4, $b4);
    """

    t = Template(template.strip())
    #print t.substitute(x='X0', y='Y0', a='A0')
    iteration = 0
    cols = 4
    lookahead = 0
    for i in range(0, K/2, 1):
          #if i*2 % 32 == 0:
          if i == 0:
            comment='// Prefetch mid-way-through B columns'
            lookahead = lookahead + 32
            prefetch_b='PREFETCH_T0(&B[b_index_base+%d], LARGE_BLOCK_SIZE*NUM_COLS/2*sizeof(double));' % (K/2)
          else:
            comment=''
            prefetch_b=''

          print ' '*8 + t.substitute(
                  iteration1=i+1,
                  index1=i*2,
                  x1='X%d' % (i%2),
                  y1='Y%d' % ((i*cols)%cols),

                  a_index_base='a_index_base',
                  b_index_base='b_index_base',

                  b_col_offset_1='%d' % (K * 0),
                  b_col_offset_2='%d' % (K * 1),
                  b_col_offset_3='%d' % (K * 2),
                  b_col_offset_4='%d' % (K * 3),

                  b1='B0',
                  a1='A0',
                  b2='B1',
                  a2='A1',
                  b3='B2',
                  a3='A2',
                  b4='B3',
                  a4='A3',

                  y2='Y%d' % ((i*cols+1)%cols),

                  y3='Y%d' % ((i*cols+2)%cols),

                  y4='Y%d' % ((i*cols+3)%cols),
                  comment=comment,
                  prefetch_b=prefetch_b,


                  )
          print ''


if __name__=='__main__':
    method_1()
