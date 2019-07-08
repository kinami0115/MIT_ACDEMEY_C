#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));
    int num,count=0;
    int i,input_count,max_num,min_num;
    printf("반복 횟수를 입력해 주세요:");
        scanf("%d", &input_count);
    printf("숫자 범위를 입력해주세요:");
        scanf("%d %d", &min_num, &max_num);
    i=rand()%(max_num+1-min_num)+min_num;
    printf("%d",i);
    do{
        printf("숫자를 입력해 주세요:");
        scanf("%d", &num);
        
    if(i<num)
        printf("입력된 숫자보다 작습니다.\n");
    else if(i>num)
        printf("입력된 숫자보다 큽니다\n.");
    count++;
    }while(!(i == num   ||  count>input_count));
    
    if(i == num)
    printf("정답입니다.");
    else
    {
        printf("실패입니다.");
    }

    return 0;
}