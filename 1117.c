#include <stdio.h>

int main()
{
    float X, score[2], average;
    int i = 0;

    while (i < 2)
    {
        scanf("%f", &X);

        if (X >= 0 && X <= 10)
        {
            score[i] = X;
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    average = (score[0] + score[1]) / 2.0;
    printf("media = %.2f\n", average);

    return 0;
}
