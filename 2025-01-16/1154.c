#include<stdio.h>

int main()
{
    int age,sum=0,count=0;
    float average;

    while(1)
    {
        scanf("%d",&age);
        if(age<0)
        {
            break;
        }
        else
        {
            sum+=age;
            count++;
        }
    }
    average=(float) sum/count;

    printf("%.2f\n",average);



    return 0;
}
