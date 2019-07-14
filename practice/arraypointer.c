#include <stdio.h>
int get_sum(int a[], int n);

int main(void)
{
    int data[]= {10,20,30,40,50};
    int value;

    value=get_sum(data, 5);

    printf("%d\n", value);

    return 0;
}

int get_sum(int a[], int n)
{
    int i;
    int sum = 0;

    for(i=0; i<5; i++)
        sum += a[i];

    return sum;    
}