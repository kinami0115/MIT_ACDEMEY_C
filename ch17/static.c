#include <stdio.h>
void aaa();
void main(){
aaa();
aaa();
aaa();
}


void aaa(){
    static int i=0;
        i++;
        printf("%5d\n", i);
}