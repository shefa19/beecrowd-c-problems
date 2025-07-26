#include<stdio.h>

int main()
{
    int i,n=6,count=0;
    float number[n],average,sum=0;

    for(i=0; i<n; i++)
    {
        scanf("%f",&number[i]);
        if(number[i]>0)
        {
            count++;
            sum=sum+number[i];
        }
    }
    average=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);

    return 0;
}
