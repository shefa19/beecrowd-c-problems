#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        printf("Ho");
        if(i==N-1)
        {
            printf("!");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");




    return 0;
}
