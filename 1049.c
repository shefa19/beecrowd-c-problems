#include<stdio.h>
#include<string.h>

int main()
{
    char name1[30],name2[30],name3[30],animal[30];
    scanf("%s",name1);
    scanf("%s",name2);
    scanf("%s",name3);

    if((strcmp(name1,"vertebrado"))==0)
    {
        if((strcmp(name2,"ave"))==0)
        {
            if((strcmp(name3,"carnivoro"))==0)
            {
                strcpy(animal,"aguia");
            }
            else
            {
                strcpy(animal,"pomba");
            }
        }
        else
        {
             if((strcmp(name3,"onivoro"))==0)
            {
                strcpy(animal,"homem");
            }
            else
            {
                strcpy(animal,"vaca");
            }
        }
    }
    else
    {
         if((strcmp(name2,"inseto"))==0)
        {
            if((strcmp(name3,"hematofago"))==0)
            {
                strcpy(animal,"pulga");
            }
            else
            {
                strcpy(animal,"lagarta");
            }
        }
        else
        {
             if((strcmp(name3,"hematofago"))==0)
            {
                strcpy(animal,"sanguessuga");
            }
            else
            {
                strcpy(animal,"minhoca");
            }
        }
    }
    printf("%s\n",animal);



    return 0;
}
