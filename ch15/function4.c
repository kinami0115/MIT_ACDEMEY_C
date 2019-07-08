//숫자를 입력 받아서 소수 인지 아닌지 판단하는 프로그램
//단, 소수확인은 함수로 만들어서 확인 리턴 값(0: 소수, -1: 소수 아님)

#include <stdio.h>
void main(void)

{
    int num, check;

    printf("숫자를 입력 받으시오:");
    scanf("%d", &num);
    check=prich(num);
    if(check==-1)
        printf("소수아님");
    else
    {
        printf("소수");
    }
    
}

int prich(int num)
{
    int i;
     for(i=2; i<num; i++){
         if((num%i)==0) break;
        }
        if(i==num)  return 0; //소수
        else return -1;      //소수아님
}