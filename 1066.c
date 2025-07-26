#include<stdio.h>

int main()
{
    int n=5,i,even,odd,positive,negative;
    int number[n];

    even=odd=positive=negative=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
        if(number[i]>0)
        {
            positive++;
        }
        else if(number[i]<0)
        {
            negative++;
        }
        if(number[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);


    return 0;
}
