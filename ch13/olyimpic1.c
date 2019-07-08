#include <stdio.h>

void main(){
    int i,value[8],max,min,sum=0,avg;
    for(i=0; i<8; i++){
        printf("%d번째 점수를 입력해 주세요",i+1);
        scanf("%d", &value[i]);
    }
    max=value[0];
    for(i=1; i<8; i++){
        if(max<value[i])    
        max=value[i];
    }
    min=value[0];
    for(i=1; i<8; i++){
        if(min>value[i])    
        min=value[i];
    }

    for(i=0; i<8; i++){
        sum=sum+value[i];
    }
    avg=sum-max-min;
    avg=sum/6;
    printf("점수는 %d 입니다.",avg);

    if(avg>=150)
        printf("참 잘했어요");
    else if(avg>=100)
        printf("잘했어요");
        else
            printf("노력하세요");
}