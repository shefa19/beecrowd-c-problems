#include<stdio.h>

int main()
{
    int N[20],i,j,temp;

    for(int i=0; i<20; i++)
    {
        scanf("%d",&N[i]);
    }

    i=0,j=19;
    while(i<j)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;

        i++;
        j--;
    }
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;
}
