#include <stdio.h>
int main()
{
    int score[10];
    int i;
    int sum =0;
    for(i=0;i<10;i++){
        printf("¼±¼ö %d ¹øÂ° ¼±¼öÀÇ µæÁ¡Àº?",i + 1);
        scanf("%d", &score[i]);
    }
    for(i=0;i<10;i++)
        sum+=score[i];

    printf("Æò±ÕµæÁ¡Àº %d", sum/i);

    return 0;
}