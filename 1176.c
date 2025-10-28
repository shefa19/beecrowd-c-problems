#include<stdio.h>

int main()
{
    int T, N, a;
    scanf("%d", &T);

    a = 0;
    while(a < T)
    {
        scanf("%d", &N);
        N = N + 1;
        unsigned long long Fibo[N];
        unsigned long long N1 = 0, N2 = 1, fibo = 0;


        for(int i = 0; i < N; i++)
        {
            if(i <= 1)
            {
                fibo = i;
            }
            else
            {
                fibo = N1 + N2;
                N1 = N2;
                N2 = fibo;
            }
            Fibo[i] = fibo;
        }
        printf("Fib(%d) = %llu\n", N-1, Fibo[N-1]);

        a++;
    }

    return 0;
}
