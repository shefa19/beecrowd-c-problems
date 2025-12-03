#include <stdio.h>
#include <string.h>

int main() {
    int T, Caso = 1;
    scanf("%d", &T);

    while (T > 0) {
        char Baz[10], Raj[10];
        scanf("%s %s", Baz, Raj);

        int novo = strcmp(Baz, Raj);
        int paperB = strcmp(Baz, "papel"), paperR = strcmp(Raj, "papel");
        int scissorsB = strcmp(Baz, "tesoura"), scissorsR = strcmp(Raj, "tesoura");
        int rockB = strcmp(Baz, "pedra"), rockR = strcmp(Raj, "pedra");
        int lizardB = strcmp(Baz, "lagarto"), lizardR = strcmp(Raj, "lagarto");
        int spockB = strcmp(Baz, "Spock"), spockR = strcmp(Raj, "Spock");

        char name[20];

        if (novo == 0) {
            strcpy(name, "De novo");
        } else if (scissorsB == 0) {
            if (lizardR == 0 || paperR == 0) {
                strcpy(name, "Bazinga");
            } else {
                strcpy(name, "Raj trapaceou");
            }
        } else if (paperB == 0) {
            if (rockR == 0 || spockR == 0) {
                strcpy(name, "Bazinga");
            } else {
                strcpy(name, "Raj trapaceou");
            }
        } else if (rockB == 0) {
            if (lizardR == 0 || scissorsR == 0) {
                strcpy(name, "Bazinga");
            } else {
                strcpy(name, "Raj trapaceou");
            }
        } else if (lizardB == 0) {
            if (spockR == 0 || paperR == 0) {
                strcpy(name, "Bazinga");
            } else {
                strcpy(name, "Raj trapaceou");
            }
        } else if (spockB == 0) {
            if (scissorsR == 0 || rockR == 0) {
                strcpy(name, "Bazinga");
            } else {
                strcpy(name, "Raj trapaceou");
            }
        }

        printf("Caso #%d: %s!\n", Caso++, name);
        T--;
    }

    return 0;
}
