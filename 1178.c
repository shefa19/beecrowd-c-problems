#include<stdio.h>

int main()
{
    double X,Y,N[100];
    scanf("%lf",&X);
    Y=X;
    for(int i=0; i<100; i++)
    {
        N[i]=Y;
        Y=Y/2.0;
    }
    for(int i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,N[i]);
    }


    return 0;
}
