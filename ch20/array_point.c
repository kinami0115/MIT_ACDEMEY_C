#include <stdio.h>

int main(void){
    int a[] = {10,20,30,40};
    char s[] = "Helloworld";
    s[0] = 'a';

    printf("¿Ã∞Õ¿∫%d\n", a[4]);
    printf("*a = %u\n",a);
    printf("*(a+1) = %u\n", *(a+1));
    printf("*(a+2) = %u\n", *(a+2));

    printf("%s", s);

    int i=0; 
    for(i=0;i<3;i++)
    printf("%d", a[i]);
    


    return 0;
}