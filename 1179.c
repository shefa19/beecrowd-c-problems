#include<stdio.h>

int main()
{
    int a, p, q, N, par[5], impar[5];

    a = p = q = 0;
    while (a < 15)
    {
        scanf("%d", &N);

        if (N % 2 == 0)
        {
            par[p] = N;
            p++;
            if (p == 5)
            {
                for (int i = 0; i < p; i++)
                {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                p = 0;
            }
        }
        else
        {
            impar[q] = N;
            q++;
            if (q == 5)
            {
                for (int j = 0; j < q; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                q = 0;
            }
        }
        a++;
    }

    for (int i = 0; i < q; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < p; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
