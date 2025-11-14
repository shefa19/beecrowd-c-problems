#include <stdio.h>

int main()
{
    int N, position = 0;
    scanf("%d", &N);
    int X[N];


    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }


    int smallest = X[0];


    for (int i = 1; i < N; i++) {
        if (X[i] < smallest) {
            smallest = X[i];
            position = i;
        }
    }
    printf("Menor valor: %d\n", smallest);
    printf("Posicao: %d\n", position);

    return 0;
}
