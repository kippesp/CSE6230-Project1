from string import Template

def method_1():
    template = """\
        // Iteration $iteration1
        $x1 = _mm_load_pd(&A[a_index+$index1]);
        $y1 = _mm_load_pd(&B[b_index+$index1]);
        $x1 = _mm_mul_pd($x1, $y1);
        $a = _mm_add_pd($a, $x1);

        // Iteration $iteration2
        $x2 = _mm_load_pd(&A[a_index+$index2]);
        $y2 = _mm_load_pd(&B[b_index+$index2]);
        $x2 = _mm_mul_pd($x2, $y2);
        $a = _mm_add_pd($a, $x2);
    """

    t = Template(template.strip())
    #print t.substitute(x='X0', y='Y0', a='A0')
    iteration = 0
    for i in range(0, 48, 10):
        for j in range(0, 5, 2):
            print ' '*8 + t.substitute(
                    iteration1=iteration+1,
                    iteration2=iteration+2,
                    index1=(iteration)*2,
                    index2=(iteration+1)*2,
                    x1='X%d' % j,
                    y1='Y%d' % j,
                    x2='X%d' % (j+1),
                    y2='Y%d' % (j+1),
                    a='A0',
                    )
            iteration = iteration + 2
            if iteration >= 22:
                break
            print


if __name__=='__main__':
    method_1()
