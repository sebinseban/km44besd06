//sebin sebastian
//06/01/2022
//Extend the percentage marks program to print the grade of the student as per below division , using switch statement.
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
    printf("Enter 6 marks :");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

    total = (a+b+c+d+e+f)/6;

    switch ((int)total)
    {
        case 80 ... 100 :
            printf("Honors.\n");
            break;
        
        case 60 ... 79 :
            printf("First division.\n");
            break;

        case 50 ... 59:
            printf("Second division.\n");
            break;

        case 40 ... 49:
            printf("Third division.\n");
            break;

        case 0 ... 39 :
            printf("Fail.\n");
            break;





    }
    printf("the typecasted value is :%d and original value is : %f", (int)total, total);
}