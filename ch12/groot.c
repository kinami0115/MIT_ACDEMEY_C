#include <stdio.h>
int main(void)
{
    int water;
    while(1)
    {
        printf("���� �Է� ���ּ���.:");
        scanf("%d", &water);
        if(water == 1)
            printf("���� �׷�Ʈ, ���� ���\n");
        else
            printf("�����\n");
        
    }
    return 0;    

}