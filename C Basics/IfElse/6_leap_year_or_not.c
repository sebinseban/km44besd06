//sebin sebastiam
//02/01/2022
//check if an year is leap year or not

#include <stdio.h>
int main()
{
    int year = 0;
    printf("Enter year to find if its leap year or not:");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            printf("Also leap year.\n");
        }
        else 
        {
            printf("Not a leap year.\n");
        }
    }
    else if (year % 4 == 0)
    {
        printf("Leap year.\n");
    }
    else 
    {
        printf("Not leap year.\n");
    }
}