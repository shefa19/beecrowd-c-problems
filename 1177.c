#include<stdio.h>

int main()
{
    int i,x,T,N[1000];
    scanf("%d",&T);
    x=0;
    for(i=0; i<1000; i++)
    {
        N[i]=x;
        x++;
        if(x==T)
        {
            x=0;
        }
    }
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }


    return 0;
}
