#include <stdio.h>

int main()
{
    int N,i;
    scanf("%d", &N);
    float a, b, c,calculate,average[N];

    for (i = 0; i < N; i++) {

        scanf("%f %f %f", &a, &b, &c);

        calculate= ((a * 2) + (b * 3) + (c * 5)) / 10;

        average[i]=calculate;
    }
    for(i=0; i<N; i++)
    {
        printf("%.1f\n",average[i]);
    }

    return 0;
}
