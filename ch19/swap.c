//swap
//a,b�� ������ ������ ������ ���� �ְ� 
//�� ���� ��ȯ�Ͽ� ���
//��> a=3 b=4 �ʱ�ȭ ��
//a�� b�� ����ϸ� 4,3���� ���


#include <stdio.h>
int main(){
    int a=3,b=4;
    int sum;

    sum=a;
    a=b;
    b=sum;
    

    printf("a=%d  b=%d", a,b);
    
}