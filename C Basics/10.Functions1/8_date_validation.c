//sebin sebastian
//23/01/2022
// Write a function to accept a date 
//as input and return 1 if it is valid, 0 if it is invalid. print the message in main function.

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

int validYear(int day, int month, int year)
{
    if( day > 0 && day <=31 && month >0 && month <= 12 && year > 0)
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
                return 1;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                return 1;
                break;
            case 2:
                if( leapYear(year) == 1)
                {
                    return 1;
                }
                else if( leapYear(year) == 0)
                {
                    return 0;
                }
        }
    }
}
        
    


int main()
{
    int day,month,year;
    printf("Enter day-month-year:");
    scanf("%d %d %d",&day,&month,&year);

    if (validYear(day,month,year) == 1)
    {
        printf("Valid date.\n");
    }
    else 
    {
        printf("Invalid date.\n");
    }


}