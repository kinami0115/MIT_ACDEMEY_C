// 0,1,2,3 을 입력받는다.
// 입력받은 수를 한글로 출력한다.

#include <stdio.h>
int main(void){

int input;

printf("숫자를 입력하십시오:");
scanf("%d", &input);
if (input == 0)
    printf("숫자가 0 입니다.");
    
    else if(input == 1)
        printf("숫자가 1 입니다.");
    
    else if(input == 2)
        printf("숫자가 2 입니다.");
    
    else if(input == 3)
        printf("숫자가 3 입니다.");
    
    else
        printf("다시 입력해주세요");

    return 0;
}