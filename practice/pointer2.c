#include <stdio.h>

int main(void)
{
    char *pc;
    short *ps;
    int *pi;

    pc = (char *)10000;
    ps = (short *)10000;
    pi = (int *)10000;
    printf("before pc=%d, ps = %d, pi = %d\n", pc, ps, pi);

    pc++;
    ps++;
    pi++;
    printf("after pc=%d, ps = %d, pi = %d", pc, ps, pi);

    return 0;
}