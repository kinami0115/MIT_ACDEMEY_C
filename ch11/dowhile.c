#include <stdio.h>

int main(void){

    int i=1, sum=0;

    do{sum = sum + i ;
        i++;

    }while ( i<=10);
   
    printf("1���� ���� 100 ���� ���� ���� %d", sum);



    return 0;
}