#include<stdio.h>

int main()
{
    int i,j,N,X,Y;

    scanf("%d",&N);
    int number[N];

    for(i=0; i<N; i++)
    {
        int sum=0;
        scanf("%d %d",&X,&Y);
        if(X>Y)
        {
            int temp=X;
            X=Y;
            Y=temp;
        }
        for(j=X+1; j<Y; j++)
        {
            if(j%2!=0)
            {
                sum+=j;

            }
        }
        number[i]=sum;
    }
    for(i=0; i<N; i++)
    {
        printf("%d\n",number[i]);
    }



    return 0;
}
