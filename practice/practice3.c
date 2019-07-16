#include<stdio.h>

int main(void)
{
    char name[100];
    char address[100];

    printf("name");
    gets(name);

    printf("address");
    gets(address);

    puts(name);
    puts(address);

    return 0;
}