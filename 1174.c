#include<stdio.h>

int main()
{
    float A[100], x;

    for(int j = 0; j < 100; j++)
    {
        scanf("%f", &A[j]);
    }

    for(int i = 0; i < 100; i++)
    {
        if(A[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}
