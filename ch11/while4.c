#include <stdio.h>

int main(void){

    int i=1;
    
    do{
        printf("숫자를 입력해 주세요:");
        scanf("%d", &i);
    }while(i !=0);

    // while(i !=0){
    // printf("숫자를 입력해 주세요:");
    // scanf("%d", &i);
    // }
     printf("종료되었습니다");
    

    return 0;
}