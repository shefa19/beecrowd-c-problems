#include<stdio.h>

int main()
{
    int N,X;
    scanf("%d",&N);

    int i=0;
    while(i<N)
    {
        scanf("%d",&X);
        int count=0;
        if(X<=1)
        {
            count++;
        }
        else
        {
           for(int j=2; j<=X/2; j++)
        {
            if(X%j==0)
            {
                count++;
                break;
            }
        }
        }

        if(count==0)
        {
            printf("%d eh primo\n",X);
        }
        else
        {
            printf("%d nao eh primo\n",X);
        }

        i++;
    }


    return 0;
}
