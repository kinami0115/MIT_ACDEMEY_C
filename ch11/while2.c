#include <stdio.h>

int main(void){
    
int i=1, sum=0;


    while (i <= 100){
        sum = sum + i ;
        ++i;
    }
    printf("1에서 부터 100 까지 더한 값은 %d", sum);


return 0;
}