#include<stdio.h>
int main()
{
    int num,temp,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d",&num);
    temp=num;
    n100=n50=n20=n10=n5=n2=n1=0;


            n100=temp/100;
            temp=temp%100;

            n50=temp/50;
            temp=temp%50;

            n20=temp/20;
            temp=temp%20;

            n10=temp/10;
            temp=temp%10;

            n5=temp/5;
            temp=temp%5;

            n2=temp/2;
            temp=temp%2;

            n1=temp/1;


    printf("%d\n",num);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}
