//�μ��� �Է� �޾Ƽ�  ���� �� ������α׷�
//������ 2. ���ϴ� �κ��� �Լ��� ���� ���
#include <stdio.h>
void main(void){

    int num1, num2, sum, sum1, sum2, sum3, sum4;

    printf("�� ���� �Է� �Ͻÿ�.:");
    scanf("%d %d", &num1, &num2);

    sum=add(num1,num2);
    printf("%d\n", sum);

    sum1=minus(num1,num2);
    printf("%d\n", sum1);

    sum2=mul(num1,num2);
    printf("%d\n", sum2);

    sum3=div(num1,num2);
    printf("%d\n", sum3);

    sum4=rem(num1,num2);
    printf("%d\n", sum4);

}

int add(int a, int b){             //parameter-����

    int sum;
    sum=a+b;
    return sum; //return a+b;
    }
int minus(int a, int b){
    return a-b;}
int mul(int a, int b){
    return a*b; }
int div(int a, int b){
    return a/b; }
int rem(int a, int b){
    return a%b; }