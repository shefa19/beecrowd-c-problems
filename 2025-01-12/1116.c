#include<stdio.h>

int main()
{
    int N,X,Y;
    float division;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&X,&Y);
        if(Y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            division=(float) X / Y;
            printf("%.1f\n",division);
        }
    }




    return 0;
}
