//사용자로 부터 숫자를 입력 받는다.
//사용자의 숫자가 50인지 확인한다.
//예> 사용자의 숫자를 입력해 주세요.
//(50일 경우) 당첨되셨습니다. 
//            다음기회에.

#include <stdio.h>
int main(void)
{
    int x;

    printf("숫자를 입력하시오:");
    scanf("%d", &x);

    if(x==50){
        printf("당첨되셨습니다.\n"); 
    }
    else
    {
        printf("다음기회에");
    }
}
