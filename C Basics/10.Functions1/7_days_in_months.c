//sebin sebastian
//23/01/2022
//Write a function that accepts a month and year as input, and returns the number of days of the month as output.
// Print the number of days in a given month and year in main function by using this function.

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

int validYear(int month,int year_n)
{
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days.\n");
            break;
        case 2:
            if( leapYear(year_n) == 1)
            {
                printf("28 days. Leap year.\n");
            }
            else if( leapYear(year_n) == 0)
            {
                printf("29 days.Not leap year.\n");
            }

    }
}



int main()
{
    int month,year;
    printf("Enter month and year:");
    scanf("%d %d",&month,&year);

    
        validYear(month,year);
    

}
