// 0,1,2,3 �� �Է¹޴´�.
// �Է¹��� ���� �ѱ۷� ����Ѵ�.

#include <stdio.h>
int main(void){

int input;

printf("���ڸ� �Է��Ͻʽÿ�:");
scanf("%d", &input);
if (input == 0)
    printf("���ڰ� 0 �Դϴ�.");
    
    else if(input == 1)
        printf("���ڰ� 1 �Դϴ�.");
    
    else if(input == 2)
        printf("���ڰ� 2 �Դϴ�.");
    
    else if(input == 3)
        printf("���ڰ� 3 �Դϴ�.");
    
    else
        printf("�ٽ� �Է����ּ���");

    return 0;
}