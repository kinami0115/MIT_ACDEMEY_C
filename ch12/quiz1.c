#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int input_count, dice,count;
    int dice_1=0,dice_2=0,dice_3=0,dice_4=0,dice_5=0,dice_6=0;
    printf("�ݺ� Ƚ���� �Է��� �ּ���:");
    scanf("%d", &input_count);
    for(count = 0; count< input_count; count++){
        dice=rand()%6+1;

        switch (dice)
        {
        case 1:
                dice_1++;
            break;
        case 2:
                dice_2++;
            break;
        case 3:
                dice_3++;
            break;
        case 4:
                dice_4++;
            break;
        case 5:
                dice_5++;
            break;
        case 6:
                dice_6++;
            break;
        }
    }   
    
 printf("1�� Ȯ�� : %f\n", (double)dice_1/input_count*100);
 printf("2�� Ȯ�� : %f\n", (double)dice_2/input_count*100);
 printf("3�� Ȯ�� : %f\n", (double)dice_3/input_count*100);
 printf("4�� Ȯ�� : %f\n", (double)dice_4/input_count*100);
 printf("5�� Ȯ�� : %f\n", (double)dice_5/input_count*100);
 printf("6�� Ȯ�� : %f\n", (double)dice_6/input_count*100);
    
return 0;
}
