#include<stdio.h>
#include<math.h>

int main()
{
    int N;

    while(1)
    {
        scanf("%d",&N);
        int matrix[N][N];

        if(N==0)
        {
            break;
        }

        int i,j,mul=1;
        for(i=0; i<N; i++)
        {
            mul = (int)pow(2, i);
            for(j=0; j<N; j++)
            {
                matrix[i][j]=mul;
                mul*=2;
            }
        }

        int temp=matrix[N-1][N-1];
        int T=0;
        while(temp!=0)
        {
            temp/=10;
            T++;
        }

        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                if(j > 0)
                    printf(" ");
                printf("%*d",T, matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }




    return 0;
}
