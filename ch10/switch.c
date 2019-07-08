#include <stdio.h>
int main(void){

    int input;
    printf("숫자를 입력해 주세요");
    scanf("%d", &input);

    switch(input)
    {
        case 0:
            printf("입력된 숫자는 0입니다.");
            break;
        case 1:
            printf("입력된 숫자는 1입니다.");
            break;
        case 2:
            printf("입력된 숫자는 2입니다.");
            break;
        case 3:
            printf("입력된 숫자는 3입니다.");
            break;
        default:
            printf("다시 입력해 주세요");
    }
    return 0;
}