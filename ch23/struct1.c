#include <stdio.h>
//typedef int 
typedef struct 
{
    int x,y,z;
}abc;


void main(){
    abc p1,p2;
    p1.x=10; p1.y=20; p1.z=30;

    p2=p1;
    //p1.x=100
    printf("%d %d %d\n", p1.x,p1.y,p1.z);
    //x=100;
    printf("%d %d %d\n", p2.x,p2.y,p2.z);
    if((p1.x == p2.x) && (p1.y == p2.y)){
        printf("¶È°°´Ù");
    }
}
