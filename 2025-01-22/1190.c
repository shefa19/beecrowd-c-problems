#include<stdio.h>

int main()
{
    double M[12][12],sum;
    int i,j,count;
    char O;
    scanf("%c",&O);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }

    sum=count=0;
    for(i=11; i>6; i--)
    {
        for(j=12-i; j<i; j++)
        {
            sum+=M[j][i];
            count++;
        }
    }

    if(O=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(O=='M')
    {
        printf("%.1lf\n",sum/count);
    }




    return 0;
}
