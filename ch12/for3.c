#include <stdio.h>
int main(void)
{
    int i,input_num,count=0;
    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%d", &input_num);
    
    for(i=1; input_num >= i ; i++ ) {
         if((input_num%i)==0){
           // printf("%d\n", i);
            count++;
            }
   
    }
     //printf("����� ������ %d", count);
     if(count==2)
            printf("�Ҽ��Դϴ�.");
     else
     {
         printf("�Ҽ��� �ƴմϴ�.");
     }
     
    return 0;    

}