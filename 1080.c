#include<stdio.h>

int main()
{
    int i,highest=0,position;
    int number[100];

    for(i=0; i<100; i++)
    {
        scanf("%d",&number[i]);
        if(number[i]>highest)
        {
            highest=number[i];
            position=i+1;
        }
    }
    printf("%d\n",highest);
    printf("%d\n",position);


    return 0;
}
