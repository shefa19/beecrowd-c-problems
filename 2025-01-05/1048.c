#include<stdio.h>
int main()
{
    double salary,Nsalary,money;
    int rate;
    char percentage='%';
    scanf("%lf",&salary);

    if(salary>0 && salary<=400.00)
    {
        money=(15*salary)/100;
        rate=15;
    }
    else if(salary>400.00 && salary<=800.00)
    {
        money=(12*salary)/100;
        rate=12;
    }
    else if(salary>800.00 && salary<=1200.00)
    {
        money=(10*salary)/100;
        rate=10;
    }
    else if(salary>1200.00 && salary<=2000.00)
    {
        money=(7*salary)/100;
        rate=7;
    }
    else
    {
        money=(4*salary)/100;
        rate=4;
    }

    Nsalary=salary+money;
    printf("Novo salario: %.2lf\n",Nsalary);
    printf("Reajuste ganho: %.2lf\n",money);
    printf("Em percentual: %d %c\n",rate,percentage);

    return 0;
}
