//�Լ� ������ parameter �� 1~3 �� ���� �޾Ƽ� 
//1: hi 2:nice to meet you 3: love you
// no return
// helloprint(1)

#include <stdio.h>
void helloprint(int num);
void main(){
   helloprint(1);
   helloprint(2);
   helloprint(3); 
}
void helloprint(int num){
    if(num==1){
        printf("%d �ȳ��ϼ���", num);
}
    else if(num==2){
        printf("%d:�ݰ����ϴ�.",num);
    }
        else{
            printf("%d:����մϴ�.",num);
    }
        
}