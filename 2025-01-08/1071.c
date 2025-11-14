#include<stdio.h>

int main()
{
    int X, Y, i, temp, sum = 0;


    scanf("%d", &X);
    scanf("%d", &Y);


    if (X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }

    for (i = X + 1; i < Y; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
