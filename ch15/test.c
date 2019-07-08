#include <stdio.h>
int get_larger( int x, int y);

int main(void){
    
    int x,y,sum;
    
    printf("두 개의 정수를 입력 하시오:");
    scanf("%d %d", &x, &y);


    sum=get_larger(x,y);
    printf("두 수 중에서 큰수는 %d입니다.", sum);
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