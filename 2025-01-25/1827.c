#include<stdio.h>

int main()
{
    int N;

    while(scanf("%d",&N) != EOF)
    {
        if(N%2!=0)
        {
            int matrix[N][N];
        int i,j;

        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                if(i==N/2 && j==N/2)
                {
                    printf("4");
                }
                else if(i>=N/3 && j>=N/3 && i<2*N/3 && j<2*N/3 && N%3 == 0)
                {
                    printf("1");
                }
                else if(i>=N/3 && j>=N/3 && i<=2*N/3 && j<=2*N/3 && N%3 != 0)
                {
                    printf("1");
                }
                else if(j == N-1-i)
                {
                    printf("3");
                }
                else if(i==j)
                {
                    printf("2");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
        }
    }




    return 0;
}
