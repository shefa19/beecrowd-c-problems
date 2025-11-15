#include<stdio.h>

int main()
{
    float M[12][12],sum=0;
    int C,i,j;
    char T;

    scanf("%d",&C);
    scanf(" %c",&T);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
    for(i=0; i<12; i++)
    {
        sum+=M[i][C];
    }
    if(T=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(T=='M')
    {
        printf("%.1f\n",sum/2.0);
    }




    return 0;
}
