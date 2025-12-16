#include<stdio.h>

int main()
{
    int A,B,C,mode;
while(1)
{
        scanf("%d %d %d",&A,&B,&C);

    if(A>B && B<=C)
    {
        mode=1;
    }
    else if(A<B && B>=C)
    {
        mode=0;
    }
    else if(A<B && B<C &&((B-A)>(C-B)))
    {
        mode=0;
    }
    else if(A<B && B<C &&((B-A)<=(C-B)))
    {
        mode=1;
    }
    else if(A>B && B>C && ((B-C)<(A-B)))
    {
        mode=1;
    }
    else if(A-B && B-C && ((B-C)>=(A-B)))
    {
        mode=0;
    }
    else if(A==B)
    {
        if(B<C)
        {
            mode=1;
        }
        else if(B>C)
        {
            mode=0;
        }
    }


    if(mode==1)
    {
        printf(":)\n");
    }
    else if(mode==0)
    {
        printf(":(\n");
    }
}



    return 0;
}
