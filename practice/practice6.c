#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[100], b[100];

    printf("first: ");
    gets(a);

    printf("second: " );
    gets(b);

    if(strcmp(a,b)== 0)
        printf("it is same");
    else 
        printf("it is not same");

    return 0;
}