#include<stdio.h>

int main()
{
    int N,i,countIN=0,countOUT=0;
    scanf("%d",&N);
    int X[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
        if(X[i]>=10 && X[i]<=20)
        {
            countIN++;
        }
        else
        {
            countOUT++;
        }
    }
    printf("%d in\n",countIN);
    printf("%d out\n",countOUT);


    return 0;
}
