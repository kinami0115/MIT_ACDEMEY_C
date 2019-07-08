#include <stdio.h>
int main(void){

    int x,y;

    for(x=2;x<10;x++)
        for(y=1;y<10;y++)
            printf("%d * %d= %d\n",x,y,x*y);

    return 0;

}