#include<stdio.h>
int main()
{
    int N,hour,minute,second,temp;
    scanf("%d",&N);

    temp=N;
    hour=minute=second=0;
    hour=temp/3600;
    temp=temp%3600;

    minute=temp/60;
    temp=temp%60;

    second=temp;

    printf("%d:%d:%d\n",hour,minute,second);

    return 0;
}
