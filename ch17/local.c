//함수 만들자 parameter 로 1~3 의 값을 받아서 
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
        printf("%d 안녕하세요", num);
}
    else if(num==2){
        printf("%d:반갑습니다.",num);
    }
        else{
            printf("%d:사랑합니다.",num);
    }
        
}