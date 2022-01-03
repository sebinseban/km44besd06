#include <stdio.h>

int main()
{
    int day,month,year;
    printf("Enter the date in the form dd-m-yyyy: ");
    scanf("%d-%d-%d", &day, &month,&year);

    //printf("THe three are %d %d %d", day,month,year);
    
    
    if (year < 1900)
    {
        printf("Invalid date.\n");
    }
    else if (year > 2100)
    {
        printf("Invalid date.\n");
    }
    else if (day > 31)
    {
        printf("Invalid date.\n");
    }
    else if (month == 2)
    {
        if (day > 30)
        {
            printf("Invalid date\n");
        }
        else if ( year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                if(day == 29)
                {
                    printf("Valid date\n");
                }
                else 
                {
                    printf("Invalid date\n");
                }
            }
            else if ( year % 4 == 0)
            {
                if (day != 29)
                {
                    printf("Invalid date\n");
                }
                else 
                {
                    printf("Invalid date\n");
                }
            }
        }
    }
    else 
    {
        printf("Valid date.");
    }
}