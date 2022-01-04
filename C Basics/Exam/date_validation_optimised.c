//sebin sebastian
//04/02/2022
//Enter a program to accept valid dates

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

    else if(day <= 0)
    {
        printf("Invalid date.\n");
    }
    else if ( month > 12)
    {
        printf("Invalid date.\n");
    }
    else if(month <= 0)
    {
        printf("Invalid date.\n");
    }
    else if (month == 1)
    {
        if(day > 32)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }
    else if (month == 2)
    {
        if (day > 31)
        {
            printf("Invalid date.\n");
        }

        else if ( year % 100 != 0)
        {

            if ( day <= 28 )
            {
                printf("Valid date.\n");
            }
            else
            {
                printf("Invalid date.\n");
            }
        }

        else if ( year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                if (day == 29)
                {
                    printf("Valid date.\n");
                }
                else
                {
                    printf("Invalid date.\n");
                }
            }
        }
    }

    else if (month == 3)
    {
        if ( day > 31)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 4)
    {
        if ( day > 30)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 5)
    {
        if ( day > 31)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 6)
    {
        if ( day > 30)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 7)
    {
        if ( day > 31)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 8)
    {
        if ( day > 31)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 9)
    {
        if ( day > 30)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 10)
    {
        if ( day > 31)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 11)
    {
        if ( day > 30)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else if (month == 12)
    {
        if ( day > 31)
        {
            printf("Invalid date.\n");
        }
        else
        {
            printf("Valid date.\n");
        }
    }

    else
    {
        printf("Valid date.\n");
    }

}
