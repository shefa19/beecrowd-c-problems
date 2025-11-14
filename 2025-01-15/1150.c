#include<stdio.h>

void calculate(int x, int y)
{
    int count = 0, sum = 0;

    while (sum < y)
    {
        sum += x;
        count++;
        x++;
    }
    printf("%d\n", count);
}

int main()
{
    int X, Z;
    scanf("%d", &X);

    while (1)
    {
        scanf("%d", &Z);
        if (Z > X)
        {
            break;
        }
    }

    calculate(X, Z);

    return 0;
}
