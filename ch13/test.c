#include <stdio.h>
int main()
{
    int score[10];
    int i;
    int sum =0;
    for(i=0;i<10;i++){
        printf("���� %d ��° ������ ������?",i + 1);
        scanf("%d", &score[i]);
    }
    for(i=0;i<10;i++)
        sum+=score[i];

    printf("��յ����� %d", sum/i);

    return 0;
}