//���ڸ� �Է� �޾Ƽ� �Ҽ� ���� �ƴ��� �Ǵ��ϴ� ���α׷�
//��, �Ҽ�Ȯ���� �Լ��� ���� Ȯ�� ���� ��(0: �Ҽ�, -1: �Ҽ� �ƴ�)

#include <stdio.h>
void main(void)

{
    int num, check;

    printf("���ڸ� �Է� �����ÿ�:");
    scanf("%d", &num);
    check=prich(num);
    if(check==-1)
        printf("�Ҽ��ƴ�");
    else
    {
        printf("�Ҽ�");
    }
    
}

int prich(int num)
{
    int i;
     for(i=2; i<num; i++){
         if((num%i)==0) break;
        }
        if(i==num)  return 0; //�Ҽ�
        else return -1;      //�Ҽ��ƴ�
}