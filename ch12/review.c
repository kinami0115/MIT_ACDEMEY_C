#include <stdio.h>
int main(void)
{
    int i,j;
    
    for(i=2; i<1000000000; i++){
        for(j=2;j<i ;j++){      //�Ҽ��Ǻ�(�߰��� ����� ������ ����)
            if((i%j)==0) break;
        }
        if(j==i)                //�������� �Ҽ��� �ƴϰ�, �� ���߸� ��������=�Ҽ�
         printf("%d\n",i);
    }
    return 0;
}