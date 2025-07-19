#include<stdio.h>
int main()
{
    int X,Y;
    double Total;
    scanf("%d %d",&X,&Y);

    switch (X)
    {
    case 1:
        Total=4.00*Y;
        printf("Total: R$ %.2lf\n",Total);
        break;
    case 2:
        Total=4.50*Y;
        printf("Total: R$ %.2lf\n",Total);
        break;
    case 3:
        Total=5.00*Y;
        printf("Total: R$ %.2lf\n",Total);
        break;
    case 4:
        Total=2.00*Y;
        printf("Total: R$ %.2lf\n",Total);
        break;
    case 5:
        Total=1.50*Y;
        printf("Total: R$ %.2lf\n",Total);
        break;

    }

    return 0;
}
