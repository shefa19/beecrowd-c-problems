#include<stdio.h>

int main()
{
    float S=1,Divisor=2;

    for(int i=3; i<=39; i=i+2)
    {
        S+=(float) i/Divisor;
        Divisor*=2.0;
    }
    printf("%.2f\n",S);


    return 0;
}
