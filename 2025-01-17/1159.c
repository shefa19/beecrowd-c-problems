#include<stdio.h>

int main()
{
    int X;

    while(1)
    {
        scanf("%d",&X);

        if(X==0)
        {
            break;
        }
        else if(X%2!=0)
        {
            X=X+1;
        }
        int sum=0;
        for(int i=0; i<5; i++)
        {
            sum+=X;
            X+=2;
        }
        printf("%d\n",sum);
    }

    return 0;
}
