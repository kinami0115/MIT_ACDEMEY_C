#include <stdio.h>

int main(void)
{
    int x,y,z;

    printf("고객으로 부터 받은돈:");
    scanf("%d", &x);

    printf("물건 값 : ");
    scanf("%d", &y);

    z= x-y;
    printf("\t오천원 : %d", z / 5000);
    printf("\t천원 : %d", (z % 5000)/ 1000);
    printf("\t백원 : %d", ((z % 5000)/ 1000) / 100);
    printf("\t십원 : %d", ((((z % 5000)/ 1000)) / 100) / 10);
    return 0;



    
}