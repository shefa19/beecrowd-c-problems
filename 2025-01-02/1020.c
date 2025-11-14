#include<stdio.h>
int main()
{
    int num,day,month,year,temp;
    scanf("%d",&num);

    temp=num;
    day=month=year=0;

    year=temp/365;
    temp=temp%365;
    month=temp/30;
    temp=temp%30;
    day=temp;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;
}
