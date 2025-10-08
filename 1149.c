#include<stdio.h>
void calculate(int X, int Y)
{
    int sum=0;
    for (int i = 0; i < Y; i++)
    {
        sum += (X + i);
    }

    printf("%d\n", sum);
}

int main()
{
    int A, N;

    scanf("%d", &A);

    while (1)
    {
        scanf("%d", &N);
        if (N > 0) break;
    }

    calculate(A,N);


    return 0;
}
