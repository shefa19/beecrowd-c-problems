#include <stdio.h>
#include <string.h>

int main()
{
    char input[4];
    int digit = 0;
    int n = 0;

    while (n < 3)
    {
        scanf("%s", input);

        if (strcmp(input, "---") == 0)
        {
            digit += 0;
        }
        else if (strcmp(input, "--*") == 0)
        {
            digit += 1;
        }
        else if (strcmp(input, "-*-") == 0)
        {
            digit += 2;
        }
        else if (strcmp(input, "-**") == 0)
        {
            digit += 3;
        }
        else if (strcmp(input, "*--") == 0)
        {
            digit += 4;
        }
        else if (strcmp(input, "*-*") == 0)
        {
            digit += 5;
        }
        else if (strcmp(input, "**-") == 0)
        {
            digit += 6;
        }
        else if (strcmp(input, "***") == 0)
        {
            digit += 7;
        }
        else if (strcmp(input, "caw") == 0)
        {
            scanf("%s", input);
            if (strcmp(input, "caw") == 0)
            {
                printf("%d\n", digit);
                digit = 0;
                n++;
            }
        }
    }

    return 0;
}
