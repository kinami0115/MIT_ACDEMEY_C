//참조에 의한 호출 (call by reference)
//값에 의한 호출 (call by value)

#include <stdio.h>
void swap(int *p1, int*p2);
void main(){
    int a=3,b=4;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}

void swap(int *p1, int*p2){
    // p1 =< a의 주소값
    // *p1 =< p1이 가르치는 값 즉 a의 값
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}