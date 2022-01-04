//sebin sebastian
//04/02/2022
//check if an year is leap year or not.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);

    if( year % 400 == 0 || (year % 100 != 0 && year % 4 == 0) )
    {
        printf("Leap year.\n");
        
    }
    
    else 
    {
        printf("Not leap year.\n");
    }
}