#include <stdio.h>
int main(void){

    int input;
    printf("���ڸ� �Է��� �ּ���");
    scanf("%d", &input);

    switch(input)
    {
        case 0:
            printf("�Էµ� ���ڴ� 0�Դϴ�.");
            break;
        case 1:
            printf("�Էµ� ���ڴ� 1�Դϴ�.");
            break;
        case 2:
            printf("�Էµ� ���ڴ� 2�Դϴ�.");
            break;
        case 3:
            printf("�Էµ� ���ڴ� 3�Դϴ�.");
            break;
        default:
            printf("�ٽ� �Է��� �ּ���");
    }
    return 0;
}