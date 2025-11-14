#include<stdio.h>

int main()
{
    int i,N,first=0,second=1,fibo=0;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        if(i<=1)
        {
            fibo=i;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d",fibo);
        if(i<N-1)
        {
            printf(" ");
        }
    }
printf("S");

    return 0;
}
