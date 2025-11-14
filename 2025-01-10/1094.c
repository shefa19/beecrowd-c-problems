#include<stdio.h>
#include<string.h>

int main()
{
    int i,N,quantity,total,totalC,totalR,totalS;
    char animal;
    float C,R,S;
    scanf("%d",&N);

    total=totalC=totalR=totalS=0;
    for(i=0; i<N; i++)
    {
        scanf("%d %c",&quantity,&animal);

        total+=quantity;
        if(animal=='C')
        {
            totalC+=quantity;
        }
        else if(animal=='R')
        {
            totalR+=quantity;
        }
        else
        {
            totalS+=quantity;
        }

    }
    C=(100.0*totalC)/total;
    R=(100.0*totalR)/total;
    S=(100.0*totalS)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",totalC);
    printf("Total de ratos: %d\n",totalR);
    printf("Total de sapos: %d\n",totalS);
    printf("Percentual de coelhos: %.2f %c\n",C,37);
    printf("Percentual de ratos: %.2f %c\n",R,37);
    printf("Percentual de sapos: %.2f %c\n",S,37);




    return 0;
}
