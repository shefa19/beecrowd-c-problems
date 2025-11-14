#include<stdio.h>

int main()
{
    int i,even=0,n=5;
    int number[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
        if(number[i]%2==0)
        {
            even++;
        }
    }
    printf("%d valores pares\n",even);



    return 0;
}
