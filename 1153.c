#include<stdio.h>

int main()
{
    int N,fact=1;
    scanf("%d",&N);

    for(int i=N; i>=1; i--)
    {
        fact*=i;
    }
    printf("%d\n",fact);



    return 0;
}
