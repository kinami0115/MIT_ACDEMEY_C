#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[100] = "this is a string";
    int length;

    length = strlen(s);
    printf("length of array : %d", length);

    return 0;
}