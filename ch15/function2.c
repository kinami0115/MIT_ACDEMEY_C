#include <stdio.h>
int main(void)
{
    int x,num;

    printf("반복 횟수 입력:");
    scanf("%d", &num);

    printstart(num);
    
    
    return 0;
}


 void printstart(int num){
    
    int x;
    
    for(x=0; x<num ; x++ ){
        printf("*");
    }
 }