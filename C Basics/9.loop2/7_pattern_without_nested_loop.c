//sebin sebastian
//19/01/2022
//Without using nested loops :
/*
        *
        * *
        * * *
        * * * *
        * * * * *  i*/


#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);


    for (int i = 1, j = 1; i <= input ; j++)
    {
        if(j < i)
        {
            printf("*");
        }
        else
        {
            printf("*\n");
            j = 0;
            i++;
        }

    }

}