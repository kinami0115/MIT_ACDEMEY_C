#include <stdio.h>
int main(void){

    int month, days;
    printf("���� �Է��� �ּ���:");
    scanf("%d", &month);

    if((month >=1) && (month <=12 ))

    switch (month)
    {
    case 2:
        days = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days =31;    
    }
    printf("%d���� �ϼ��� %d �Դϴ�.", month,days);
    return 0;
}