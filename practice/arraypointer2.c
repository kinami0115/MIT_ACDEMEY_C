#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int is_upper, is_lower, is_dight;
    char password[30];

    while(1){
        printf("create your password:");
        scanf("%s", password);

        is_upper = is_lower = is_dight = 0;
        for(i=0; i<strlen(password); i++)
        {
            if(password[i] >= '0' && password[i]<= '9')
                is_dight =1;
            else if(password[i] >= 'A' && password[i] <= 'Z')
                is_upper =1;
            else if(password[i] >= 'a' && password[i] <= 'z')
                is_lower =1;    
        }

        if((is_dight == 1) && (is_upper == 1) && (is_lower ==1)){
            printf("succeed\n");
            break;
        }
        else
            printf("try again");
    }
    return 0;
}