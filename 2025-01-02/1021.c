#include<stdio.h>
#include<math.h>
int main()
{
    double N,temp;
    int n100,n50,n20,n10,n5,n2,c1,c50,c25,c10,c5,c01;
    scanf("%lf",&N);

    temp=N;
    n100=n50=n20=n10=n5=n2,c1=c50=c25=c10=c5=c01=0;

    n1#include<stdio.h>

int main() {
    double N;
    int temp;
    int n100, n50, n20, n10, n5, n2, c1, c50, c25, c10, c5, c01;

    scanf("%lf", &N);
    temp = (int)(N * 100 + 0.5);

    n100 = temp / 10000;
    temp%=10000;
    n50 = temp / 5000;
    temp %= 5000;
    n20 = temp / 2000;
    temp %= 2000;
    n10 = temp / 1000;
    temp %= 1000;
    n5 = temp / 500;
    temp %= 500;
    n2 = temp / 200;
    temp %= 200;

    c1 = temp / 100;
    temp %= 100;
    c50 = temp / 50;
    temp %= 50;
    c25 = temp / 25;
    temp %= 25;
    c10 = temp / 10;
    temp %= 10;
    c5 = temp / 5;
    temp %= 5;
    c01 = temp;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", c01);

    return 0;
}
00=temp/100;
    temp=fmod(temp,100);
    n50=temp/50;
    temp=fmod(temp,50);
    n20=temp/20;
    temp=fmod(temp,20);
    n10=temp/10;
    temp=fmod(temp,10);
    n5=temp/5;
    temp=fmod(temp,5);
    n2=temp/2;
    temp=fmod(temp,2);

    c1=temp/1;
    temp=fmod(temp,1);
    c50=temp/.50;
    temp=fmod(temp,.50);
    c25=temp/.25;
    temp=fmod(temp,.25);
    c10=temp/.10;
    temp=fmod(temp,.10);
    c5=temp/.05;
    temp=fmod(temp,.05);
    c01=temp/.01;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c1);
    printf("%d moeda(s) de R$ 0.50\n",c50);
    printf("%d moeda(s) de R$ 0.25\n",c25);
    printf("%d moeda(s) de R$ 0.10\n",c10);
    printf("%d moeda(s) de R$ 0.05\n",c5);
    printf("%d moeda(s) de R$ 0.01\n",c01);

    return 0;
}
