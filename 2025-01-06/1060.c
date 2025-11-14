#include<stdio.h>

int main()
{
    double number[6];
    int i,count=0;
    for(i=0; i<6; i++)
    {
        scanf("%lf",&number[i]);
        if(number[i]>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);


    return 0;
}
