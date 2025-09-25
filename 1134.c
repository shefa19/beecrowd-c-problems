#include<stdio.h>

int main()
{
    int N,Alcohol,Gasoline,Diesel;

    N=Alcohol=Gasoline=Diesel=0;
    while(1)
    {
        scanf("%d",&N);
        if(N==4)
        {
            break;
        }
        switch (N)
        {
        case 1:
            Alcohol++;
            break;
        case 2:
            Gasoline++;
            break;
        case 3:
            Diesel++;
            break;
        default:
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alcohol);
    printf("Gasolina: %d\n",Gasoline);
    printf("Diesel: %d\n",Diesel);


    return 0;
}
