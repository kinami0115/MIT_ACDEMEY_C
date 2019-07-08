//정수를 입력 받아서 출력한다.
// 10보다 ㅈ큰지 작은지 판단한다
#include <stdio.h>

int main(void)
{
    printf("정수를 입력해주세요:");
    int i;
    scanf("%d", &i);\
    if(i>10){
       
       printf("입력한 수가 10보다 큽니다.");
       printf("입력한 수가 10보다 큽니다.");
    }
    else
            printf("입력한 수가 10보다 작습니다.");
    
    printf("이것은 무조건 실행 ", i);
    return 0;
}