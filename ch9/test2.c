//사용자로 부터 숫자와 판돈을 입력받아
//홀수 면 금액이 판돈*배수 출력하고
//짝수 면 금액을 판돈/배수으로 출력하는 프로그램

#include <stdio.h>
int main(void)
{
int x,y,z,money;

printf("숫자와 판돈,배수를 입력하시오:");
scanf("%d %d %d", &x, &y,&z);

if((x%2) == 1)
{
    money=y*z;
}
else{
    money=y/z;
}
printf("결과는 %d", money);
}
