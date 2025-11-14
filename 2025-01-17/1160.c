#include<stdio.h>

int main()
{
    int T,PA,PB,growingPA,growingPB;
    float G1,G2;
    scanf("%d",&T);

   for(int i=0; i<T; i++)
   {
       scanf("%d %d %f %f",&PA,&PB,&G1,&G2);

       int year=0;
       while(PA<=PB)
       {
           growingPA=(PA*G1)/100;
           PA+=growingPA;
           growingPB=(PB*G2)/100;
           PB+=growingPB;
           year++;
           if(year>100)
           {
               break;
           }
       }
       if(year<=100)
       {
           printf("%d anos.\n",year);
       }
       else
       {
           printf("Mais de 1 seculo.\n");
       }




   }


    return 0;
}
