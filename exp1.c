#include <stdio.h>

int main(void)
{
    int x,y,z;

    printf("������ ���� ������:");
    scanf("%d", &x);

    printf("���� �� : ");
    scanf("%d", &y);

    z= x-y;
    printf("\t��õ�� : %d", z / 5000);
    printf("\tõ�� : %d", (z % 5000)/ 1000);
    printf("\t��� : %d", ((z % 5000)/ 1000) / 100);
    printf("\t�ʿ� : %d", ((((z % 5000)/ 1000)) / 100) / 10);
    return 0;



    
}