//sebin sebastian
//14/02/2022
//WAP to print if a year is leap year or not. Modify the date validation program using this macro.

#include <stdio.h>

#define leapYear(y) (y%400 == 0)||(y % 100 != 0 && y % 4 == 0)

int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);

    if (leapYear(year) == 1)
    {
        printf("Leap year.\n");
    }
    else 
    {
        printf("Not leap year.\n");
    }
}