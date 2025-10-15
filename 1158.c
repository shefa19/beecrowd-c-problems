#include<stdio.h>

int main()
{
    int N,X,Y;
    scanf("%d",&N);
    int i=0;
    while(i<N)
    {
        scanf("%d %d",&X,&Y);
        if(X%2==0)
        {
            X=X+1;
        }

        int sum=0;
        for(int j=0; j<Y; j++)
        {
            sum+=X;
            X+=2;
        }
        printf("%d\n",sum);
        i++;
    }


    return 0;
}
