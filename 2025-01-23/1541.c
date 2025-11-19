#include<stdio.h>
#include<math.h>

int main()
{
    int A,B,C;

    while(1)
    {
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d %d",&B,&C);

        float house_Area=A*B;

        float land_Need=(house_Area*100.0)/C;

        int land_Size=sqrt(land_Need);

        printf("%d\n",land_Size);

    }


    return 0;
}
