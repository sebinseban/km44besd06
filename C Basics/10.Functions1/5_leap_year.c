//sebin sebastian
//23/01/2022
//write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0

#include <stdio.h>

int leapYear(int x)
{
    if( x % 400 == 0 || (x % 100 != 0 && x % 4 == 0) )
    {
        return 1;
        
    }
    
    else 
    {
        return 0;
    }

}

int main()
{
    int year;
    printf("Enter year: ");
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
