#include <stdio.h>
void main()
{
    int a[10];
    int i;
    // a[0]=1;
    // a[1]=2;
    // a[2]=3;
    // a[3]=4;
    // a[4]=5;
    for(i=1; i<10; i++)
    {
        a[i]=i+1;
    }

    for(i=1; i<10; i++)
        // if(a[i]%2) if((i%2)==0)
        printf("%d",a[i]);
    

    // printf("%d",a[0]);
    // printf("%d",a[1]);
    // printf("%d",a[2]);
    // printf("%d",a[3]);
    // printf("%d",a[4]);

}