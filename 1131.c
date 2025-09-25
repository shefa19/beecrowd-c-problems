#include <stdio.h>

int I = 0, G = 0, D = 0, X = 0;

void calculate() {
    int Inter, Gremio;
    scanf("%d %d", &Inter, &Gremio);

    if (Inter == Gremio) {
        D++;
    } else if (Inter > Gremio) {
        I++;
    } else {
        G++;
    }

    X++;
}

void loop() {
    int choice;

    while (1) {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &choice);

        if (choice == 1) {
            calculate();
        } else if (choice == 2) {
            break;
        }
    }
}

int main() {
    calculate();
    loop();

    printf("%d grenais\n", X);
    printf("Inter:%d\n", I);
    printf("Gremio:%d\n", G);
    printf("Empates:%d\n", D);

    if (I == G) {
        printf("Não houve vencedor\n");
    } else if (I > G) {
        printf("Inter venceu mais\n");
    } else {
        printf("Gremio venceu mais\n");
    }

    return 0;
}
