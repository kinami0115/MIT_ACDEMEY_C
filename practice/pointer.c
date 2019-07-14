#include <stdio.h>

int main(void)
{
    int x = 100;
    int y = 200;

    int *p;  //정수형 포인터 변수 선언
    
    p = &x; // 포인터 p에 변수x주소를 저장
    printf("value of p = %d\n", p);
    printf("value of *p = %d\n", *p);

    p = &y; // 포인터 p에 변수y주소를 저장
    printf("value of p = %d\n", p);
    printf("value of *p - %d\n", *p);

    return 0;
    

}