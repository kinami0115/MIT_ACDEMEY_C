#include <stdio.h>
int main(void)
{
    int x,num;

    printf("�ݺ� Ƚ�� �Է�:");
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