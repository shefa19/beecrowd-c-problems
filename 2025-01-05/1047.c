#include<stdio.h>

int main()
{
    int initial_hour, initial_minute, final_hour, final_minute, durationH, durationM;
    int cal1, cal2;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    cal1 = (initial_hour * 60) + initial_minute;
    cal2 = (final_hour * 60) + final_minute;

    if (cal1 == cal2)
    {
        durationH = 24;
        durationM = 0;
    }
    else
    {
        if (cal1 > cal2)
        {
            cal2 += 24 * 60;
        }

        int total_duration = cal2 - cal1;
        durationH = total_duration / 60;
        durationM = total_duration % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationH, durationM);

    return 0;
}
