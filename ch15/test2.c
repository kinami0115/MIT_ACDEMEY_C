#include <stdio.h>
void printch(char a, char b);

void main(void)
{
    char ch;
    int num;
    printf("���� �Է�:");
    scanf("%c %d", &ch, &num);
    printch(ch,num);  
    }



void printch(char a, char b)
{
    int i;
    for(i=0; i<b; i++){
    printf("%c", a);
    }
}
