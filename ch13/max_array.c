//배열을 10개 만들어서 그 중 최대값을 찾아라!
//배열의 값은 임의로 넣자.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

int main(){

    srand(time(NULL));

    int a[NUM];
    int i;
    int max, min;


    for(i=0;i<NUM;i++)
{
    a[i] = (rand()%100)+1;
}

    max=a[0];
    for(i=1; i<10; i++){
        if(max<a[i])
            max=a[i];
    }
     min=a[0];
    for(i=1;i<NUM;i++){
        if(min>a[i])
            min=a[i];
    }
    printf("최댓값은 %d \n 입니다.", max);
    printf("최솟값은 %d \n 입니다.", min);
     
    return 0;
}
