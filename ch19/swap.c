//swap
//a,b의 정수형 변수를 선언후 값을 넣고 
//두 값을 교환하여 출력
//예> a=3 b=4 초기화 후
//a와 b를 출력하면 4,3으로 출력


#include <stdio.h>
int main(){
    int a=3,b=4;
    int sum;

    sum=a;
    a=b;
    b=sum;
    

    printf("a=%d  b=%d", a,b);
    
}