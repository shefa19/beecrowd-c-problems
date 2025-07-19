#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,X1,X2,D,R1,R2;;
    scanf("%lf %lf %lf",&A,&B,&C);

    D=(B*B)-(4*A*C);
    if(A==0 || D<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        X1=(-B)+sqrt((B*B)-(4*A*C));
        R1=X1/(2*A);
        X2=(-B)-sqrt((B*B)-(4*A*C));
        R2=X2/(2*A);
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }


    return 0;
}
