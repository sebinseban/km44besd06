//sebin sebastian
//06/01/2022
//Write date validation program using switch statement
/* Read a date from the user(day, month & year), and print if the given date is valid or not. Consider 1900 to 2200 is valid range for years. 
Test this program for the below test cases. 

        Input            expected output	   
        1)  2-1-1857	 Invalid Date
        2)  31-1-1900      Valid Date
        3)  31-2-2000      Invalid Date
        4)  31-3-2001      Valid Date
        5)  31-4-2001      Invalid Date
        6)  29-2-2000      Valid Date
        7)  28-2-2019      Valid Date
        8)  29-2-2001      Invalid Date
        9)  32-5-2000      Invalid Date
        10) 31-6-2005     Invalid Date
        11) 31-8-2004      Valid Date
        12) 30-9-2100      Valid Date
        13) 29-2-2200      InValid Date
        14) 5-12-2201      Invalid Date
        15) 31-11-2100    Invalid Date
        16) 30-12-2011    Valid Date
        17) 31-12-2011    Valid Date
        18) 20-13-2000    Invalid Date
        19) 30-2-2000     Invalid Date
        20) 10-31-2020    Invalid Date  */

#include <stdio.h>

int main()
{
    int day,month,year;
    printf("Enter date in the following format: dd-m-yyyy:");
    scanf("%d-%d-%d",&day,&month,&year);
    //printf("THe date is %d-%d-%d\n",day,month,year);
    
    if ( year < 2100 && year > 1900)
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
                if (day > 31)
                {
                    printf("Invalid date.\n");
                }
                else if (day <= 0)
                {
                    printf("Invalid date.\n");
                }
                else 
                {
                    printf("Valid date.\n");
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11: 
                if (day > 30)
                {
                    printf("Invalid date.\n");
                }
                else if (day <= 0)
                {
                    printf("Invalid date.\n");
                }
                else 
                {
                    printf("Valid date.\n");
                }
                


            case 2:
                if (day > 29)
                {
                    printf("Invalid date.\n");
                }
                else if (day <= 0)
                {
                    printf("Invalid date.\n");
                }
                else if (year % 400== 0 && year % 4 == 0)
                {
                    if(day == 29)
                    {
                        printf("Valid date.\n");
                    }
                    else
                    {
                        printf("Invalid date.\n");
                    }
                }
                else if (year % 4 == 0)
                {
                    if( day <= 29 && day > 0)
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

}