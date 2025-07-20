#include<stdio.h>

int main()
{
    int start_T,end_T,duration;
    scanf("%d %d",&start_T,&end_T);

    if(start_T==end_T)
    {
        duration=24;
    }
    else if(start_T>end_T)
    {
        duration=(24-start_T)+end_T;
    }
    else
    {
        duration=end_T-start_T;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duration);


    return 0;
}
