#include <stdio.h>
int get_larger( int x, int y);

int main(void){
    
    int x,y,sum;
    
    printf("�� ���� ������ �Է� �Ͻÿ�:");
    scanf("%d %d", &x, &y);


    sum=get_larger(x,y);
    printf("�� �� �߿��� ū���� %d�Դϴ�.", sum);
}

int get_larger( int x, int y)
{
    if(x>y){
       return x;
    }
    else
    {
    return y;
    }
    
}