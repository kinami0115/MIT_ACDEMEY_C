#include <stdio.h>
void swap(int *px, int *py);

int main(void)
{
    int a = 100, b = 200;

    printf("before calling swap a = %d, b = %d\n", a,b);
    swap(&a,&b); //변수의 주소가 전달된다 -> swap
    printf("after calling swap a = %d, b = %d", a,b);

    return 0;
}

void swap(int *px, int *py)
{
    int tmp;

    tmp = *px;  // tmp =a
    *px = *py;  // a = b
    *py = tmp;  // b = a
}