#include<stdio.h>

int main()
{
    float M[12][12],sum;
    int i,j,count;
    char O;
    scanf("%c",&O);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
    sum=count=0;
    for(i=0; i<11; i++)
    {
        for(j=0; j<11-i; j++)
        {
            sum+=M[i][j];
            count++;
        }
    }
    if(O=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(O=='M')
    {
        printf("%.1f\n",sum/count);
    }


    return 0;
}
