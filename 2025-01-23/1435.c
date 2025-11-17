#include<stdio.h>

int main()
{
    int N;

    while (1)
    {
        scanf("%d", &N);
        if (N == 0) break;

        int matrix[N][N];
        int count = 1;
        int x = 0, y = N - 1;

        while (x <= y)
        {
            for (int i = x; i <= y; i++)
            {
                for (int j = x; j <= y; j++)
                {
                    matrix[i][j] = count;
                }
            }
            count++;
            x++;
            y--;
        }


        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (j > 0) printf(" ");
                printf("%3d", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
