#include<stdio.h>
int main()
{
    int codeP1,codeP2,unitP1,unitP2;
    double priceP1,priceP2,value;

    scanf("%d %d %lf",&codeP1,&unitP1,&priceP1);
    scanf("%d %d %lf",&codeP2,&unitP2,&priceP2);

    value=(unitP1*priceP1)+(unitP2*priceP2);

    printf("VALOR A PAGAR: R$ %.2lf\n",value);

    return 0;
}
