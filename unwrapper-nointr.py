from string import Template

K = 48

def method_1():
    template = """\
        dotprod1 += A[$index1] * B[$index2];
        dotprod2 += A[$index1] * B[$index3];
        dotprod3 += A[$index1] * B[$index4];
    """

    t = Template(template.strip())
    iteration = 0
    for i in range(0, K):
        print ' '*8 + t.substitute(
                index1='a_index+%i' % iteration,
                index2='b_index1+%i' % iteration,
                index3='b_index2+%i' % iteration,
                index4='b_index3+%i' % iteration,
                )
        iteration = iteration + 1
        print

if __name__=='__main__':
    method_1()
