#include<stdio.h>

int main()
{
    float i, j;

    for (i = 0; i <= 2.01; i += 0.2)
    {
        for (j = 1; j <= 3; j++)
        {
            if ((i == 0.0) || (i == 1.0) || (i >1.9))
            {
                printf("I=%.0f J=%.0f\n", i, j + i);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j + i);
            }
        }
    }

    return 0;
}
