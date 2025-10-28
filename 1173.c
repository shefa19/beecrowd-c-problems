#include<stdio.h>

int main()
{
    int N[10],V,X,i;
    scanf("%d",&V);
    X=V;
    for(i=0; i<10; i++)
    {
        N[i]=X;
        X*=2;
    }
    for(i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }


    return 0;
}
