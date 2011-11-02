from string import Template

def method_1():
    template = """\
        // Iteration $iteration
        $x = _mm_load_pd(&A[a_index+$index]);
        $y = _mm_load_pd(&B[b_index+$index]);
        $x = _mm_mul_pd($x, $y);
        $a = _mm_add_pd($a, $x);
    """

    t = Template(template.strip())
    #print t.substitute(x='X0', y='Y0', a='A0')
    iteration = 0
    for i in range(0, 48, 10):
        for j in range(0, 5):
            iteration = iteration + 1
            print ' '*8 + t.substitute(
                    iteration=iteration,
                    index=(iteration-1)*2,
                    x='X%d' % j,
                    y='Y%d' % j,
                    a='A0')
            if iteration >= 24:
                break
            print


if __name__=='__main__':
    method_1()
