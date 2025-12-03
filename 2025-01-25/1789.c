#include<stdio.h>

int main()
{
    int L;

    while(scanf("%d", &L) != EOF)
    {
        int V, max;

        for(int i = 0; i < L; i++)
        {
            scanf("%d", &V);
            if(i == 0)
            {
                max = V;
            }
            else if(V > max)
            {
                max = V;
            }
        }

        int level;
        if(max < 10)
        {
            level = 1;
        }
        else if(max >= 10 && max < 20)
        {
            level = 2;
        }
        else
        {
            level = 3;
        }

        printf("%d\n", level);
    }

    return 0;
}
