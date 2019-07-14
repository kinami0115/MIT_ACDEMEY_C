#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p;

    p = &i; // 포인터 p에 변수 i 주소를 저장

    printf("value of i = %d\n", i);

    *p = 20; //*p 즉 i에 20을 대입
    printf("value of i = %d", i);

    return 0;
}