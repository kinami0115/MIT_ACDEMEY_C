//�迭�� 10�� ���� �� �� �ִ밪�� ã�ƶ�!
//�迭�� ���� ���Ƿ� ����.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

int main(){

    srand(time(NULL));

    int a[NUM];
    int i;
    int max, min;


    for(i=0;i<NUM;i++)
{
    a[i] = (rand()%100)+1;
}

    max=a[0];
    for(i=1; i<10; i++){
        if(max<a[i])
            max=a[i];
    }
     min=a[0];
    for(i=1;i<NUM;i++){
        if(min>a[i])
            min=a[i];
    }
    printf("�ִ��� %d \n �Դϴ�.", max);
    printf("�ּڰ��� %d \n �Դϴ�.", min);
     
    return 0;
}
