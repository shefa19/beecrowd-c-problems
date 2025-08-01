#include<stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    int number[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0; i<N; i++)
    {
        if(number[i]==0)
        {
            printf("NULL\n");
        }
        else if(number[i]>0)
        {
            if(number[i]%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else
        {
            if(number[i]%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }



    return 0;
}
