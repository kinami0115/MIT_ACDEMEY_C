#include<stdio.h>
int main(){
    int s[3][5] = {{30,20,10,40,50},
    {50,60,40,80,30,},
    {20,80,90,65,72}};
    
    int i,j;
    for(i=0; i<3; i++){
        for (j=0; j<5; j++){
            printf("s[%d][%d]=%d\n",i,j,s[i][j]);
        }
    }
}    
    
    
    