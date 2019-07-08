#include <stdio.h>
int main(void)
{
    int i,j;
    
    for(i=2; i<1000000000; i++){
        for(j=2;j<i ;j++){      //소수판별(중간에 약수가 있으면 멈춤)
            if((i%j)==0) break;
        }
        if(j==i)                //멈췄으면 소수가 아니고, 안 멈추면 정상진행=소수
         printf("%d\n",i);
    }
    return 0;
}