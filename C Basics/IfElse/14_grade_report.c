//sebin sebastian
//02/01/2022
//Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
/*
        80 - 100        : Honours
        60 - 79         : First Division
        50 - 59         : Second Division
        40 - 49         : Third Division
        0 - 39          : Fail */

#include <stdio.h> 
int main()
{
    float a,b,c,d,e,f,total;
    printf("Enter marks for 6 subjects out of 100:");
    scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);

    total = (a+b+c+d+e+f)/6;

    if (total >= 80)
    {
        if(total <= 100)
        {
            printf("Honours.\n");
        }
    }
    else if(total >= 60)
    {
        if( total <= 79)
        {
            printf("First division\n");
        }
    }
    else if( total >= 50)
    {
        if(total <= 59)
        {
            printf("Second division\n");
        }
    }
    else if (total >= 40)
    {
        if(total <= 49)
        {
            printf("Third division\n");
        }
    }
    else if (total >= 0)
    {
        if(total <= 39)
        {
            printf("Fail\n");
        }
    }

}