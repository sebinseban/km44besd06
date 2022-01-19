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
    printf("Enter height between 1 and 5:");
    scanf("%d",&input);


    for (int i = 0 ; i < input ; i++)
    {
        int count = 0;
        count = i + 1;

        switch (count)
        {
             
            case 1:
                printf("*");
                printf("\n");
                break;
            case 2:
                printf("**");
                printf("\n");
                break;
            case 3:
                printf("***");
                printf("\n");
                break;
            case 4:
                printf("****");
                printf("\n");
                break;
            case 5:
                printf("*****");
                printf("\n");
                break;
        }


    }

}