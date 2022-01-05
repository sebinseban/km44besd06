//sebin sebastian
//05/02/2022
//Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
/*
        80 - 100        : Honours
        60 - 79         : First Division
        50 - 59         : Second Division
        40 - 49         : Third Division
        0 - 39          : Fail  */
    
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,total;
    printf("Enter marks for 6 subjects:");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);

    total = (a+b+c+d+e+f)/6;

        if (total <= 100 && total >= 80)
        {
            printf("Honours.\n");
        }
        else if (total <= 79 && total >= 60)
        {
            printf("First Division.\n");
        }
        else if (total <= 59 && total >= 50)
        {
            printf("Second Division.\n");
        }
        else if (total <= 49 && total >= 40)
        {
            printf("Third Division.\n");
        }
        else if (total <= 39 && total >= 0)
        {
            printf("Fail.\n");
        }


    
   

    
}