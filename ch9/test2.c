//����ڷ� ���� ���ڿ� �ǵ��� �Է¹޾�
//Ȧ�� �� �ݾ��� �ǵ�*��� ����ϰ�
//¦�� �� �ݾ��� �ǵ�/������� ����ϴ� ���α׷�

#include <stdio.h>
int main(void)
{
int x,y,z,money;

printf("���ڿ� �ǵ�,����� �Է��Ͻÿ�:");
scanf("%d %d %d", &x, &y,&z);

if((x%2) == 1)
{
    money=y*z;
}
else{
    money=y/z;
}
printf("����� %d", money);
}
