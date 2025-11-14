#include<stdio.h>
int main()
{
    double N,N1,N2,N3,N4,Media,NewM;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    Media=((N1*2.0)+(N2*3.0)+(N3*4.0)+(N4*1.0))/(1+2+3+4);
    printf("Media: %.1lf\n",Media);

    if(Media>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Media<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(Media>=5 && Media<=6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%lf",&N);
        printf("Nota do exame: %.1lf\n",N);
        NewM=(Media+N)/2.0;

        if(NewM>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if(NewM<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",NewM);
    }



    return 0;
}
