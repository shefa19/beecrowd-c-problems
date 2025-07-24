#include<stdio.h>

int main() {
    int dayS, dayE, H1, M1, S1, H2, M2, S2, W, X, Y, Z;
    int start_seconds, end_seconds, total_seconds, remaining_seconds, h, m;
    char din1[5],din2[5],s1,s2;


    scanf("%s %d",din1, &dayS);
    scanf("%d %c %d %c %d", &H1,&s1, &M1,&s2, &S1);


    scanf("%s %d",din2, &dayE);
    scanf("%d %c %d %c %d", &H2,&s1, &M2,&s2, &S2);


    start_seconds = (dayS - 1) * 86400 + (H1 * 3600) + (M1 * 60) + S1;
    end_seconds = (dayE - 1) * 86400 + (H2 * 3600) + (M2 * 60) + S2;


    total_seconds = end_seconds - start_seconds;


    W = total_seconds / 86400;
    remaining_seconds = total_seconds % 86400;
    X = remaining_seconds / 3600;
    remaining_seconds %= 3600;
    Y = remaining_seconds / 60;
    Z = remaining_seconds % 60;


    printf("%d dia(s)\n", W);
    printf("%d hora(s)\n", X);
    printf("%d minuto(s)\n", Y);
    printf("%d segundo(s)\n", Z);

    return 0;
}
