#include <stdio.h>
#include <stdlib.h>

#define SUCCES 1
#define FALI 2
#define LIMIT 3
int check(int id, int password);

int main(void)
{
    int id,password,result;

    while(1)
    {
        printf("ID:    \b\b\b\b");
        scanf("%d", &id);
        printf("Password:    \b\b\b\b");
        scanf("%d", &password);
        result = check(id,password );
        if(result == SUCCES)
        break;
    }
    printf("Log in");
    return 0;

}

int check(int id, int password)
{
    static int super_id = 1234;
    static int super_password = 5678;
    static int try_count;

    try_count++;
    if(try_count >= LIMIT){
        printf("Exceeded");
        exit(1);
    }
    if(id==super_id && password==super_password)
        return SUCCES;
    else
        return FALI;
}