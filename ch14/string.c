#include <stdio.h>
int main(void)
{
    
    int i;
    char str[4]= {'a','b','c','\0'};
    char str1[4]="abc";
    int a[]={0,1,2};
    char str2[]="æ»≥Á«œººø‰";
    for(i=0;i<4  ;i++){
        if(str[i]=='\0') break;
        printf("%c",str[i]);
        printf("%c",str1[i]);
        printf("%d", a[i]);
    }
    i=0;
    while (str2[i]!='\0')
    i++;{
        printf("\n%d",i+1);
    }
    
    
return 0;
}
