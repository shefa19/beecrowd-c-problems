#include<stdio.h>

int main()
{
    int N;

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
        {
            break;
        }
        int matrix[N][N];

        int i,j,x=0;
        while(x<(N-1/2))
        {
            int row=1,colum=2;
            for(i=x; i<N; i++)
            {
                for(j=x; j<N; j++)
                {
                    if(i==x)
                    {
                        matrix[i][j]=row++;
                    }
                    else if(j==x)
                    {
                        matrix[i][j]=colum++;
                    }
                }
            }
            x++;
        }
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(j > 0)
                    printf(" ");
                printf("%3d", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }




    return 0;
}
