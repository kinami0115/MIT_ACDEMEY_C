#include <stdio.h>
int main(){

int arr[9];
int i;

for(i=0;i<9;i++){
    arr[i]=2*(i+1);
}

for(i=0;i<9;i++){
    printf("%d\n", arr[i]);
}

    return 0;
}