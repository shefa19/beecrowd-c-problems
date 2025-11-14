#include<stdio.h>
int main()
{
    int N,x=1;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        for(int j=x; j<x+3; j++)
        {
           printf("%d ",j);
        }
        x+=4;
        printf("PUM\n");
    }



    return 0;
}
