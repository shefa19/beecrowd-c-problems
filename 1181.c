#include<stdio.h>

int main()
{
    int L;
    float M[12][12];
    char T;

    scanf("%d",&L);
    scanf(" %c",&T);

    for(int i=0; i<12; i++)
    {
        for (int j=0; j<12; j++)
        {
            scanf("%f",&M[i][j]);
        }
    }

    float sum=0;

    for(int i=0; i<12; i++)
    {
        sum+=M[L][i];
    }
    if(T=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(T=='M')
    {
        printf("%.1f\n",sum/12.0);
    }



    return 0;
}
