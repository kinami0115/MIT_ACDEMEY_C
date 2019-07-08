#include <stdio.h>

int main(void){

    int i=1, sum=0;

    do{sum = sum + i ;
        i++;

    }while ( i<=10);
   
    printf("1에서 부터 100 까지 더한 값은 %d", sum);



    return 0;
}