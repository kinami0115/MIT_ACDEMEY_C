#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0,max,min,sum=0,tot;
    int array[8];
    srand(time(NULL));
    for(i=0;i<8;i++)
    {
        array[i]=rand()%200+1;
    }
    for(i=0; i<8; i++)
    printf("%d\n", array[i]);
    for(i=0;i<8;i++){
        sum+=array[i];
    }
    tot=sum/i;
    max=array[0];
    for(i=1 ; i<8; i++){
        if(max<array[i])
            max=array[i];
    }
    min=array[0];
    for(i=1 ; i<8; i++){
        if(min>array[i])
            min=array[i];
    }
    tot=sum-max-min;
    
    if(tot>=150)
        printf("참 잘했어요");
    else if(tot>=100)
        printf("잘했어요");
        else
            printf("노력하세요");
return 0;
}
    