#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));
    int num,count=0;
    int i,input_count,max_num,min_num;
    printf("�ݺ� Ƚ���� �Է��� �ּ���:");
        scanf("%d", &input_count);
    printf("���� ������ �Է����ּ���:");
        scanf("%d %d", &min_num, &max_num);
    i=rand()%(max_num+1-min_num)+min_num;
    printf("%d",i);
    do{
        printf("���ڸ� �Է��� �ּ���:");
        scanf("%d", &num);
        
    if(i<num)
        printf("�Էµ� ���ں��� �۽��ϴ�.\n");
    else if(i>num)
        printf("�Էµ� ���ں��� Ů�ϴ�\n.");
    count++;
    }while(!(i == num   ||  count>input_count));
    
    if(i == num)
    printf("�����Դϴ�.");
    else
    {
        printf("�����Դϴ�.");
    }

    return 0;
}