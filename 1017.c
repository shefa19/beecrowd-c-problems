#include<stdio.h>
int main()
{
    int time,speed;
    double fuel;

    scanf("%d",&time);
    scanf("%d",&speed);

    fuel=(time*speed)/12.0;

    printf("%.3lf\n",fuel);

    return 0;
}
