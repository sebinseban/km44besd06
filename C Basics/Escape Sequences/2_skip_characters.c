//sebin sebastian
//practice with skip characters


#include <stdio.h>

int main()
{
    //one way to implement skip character via scanf
    int date,month,year;
    printf("Enter your birthday seperated by comma :"); //the input will only be correctly accepted if you seperate by comma
    scanf("%d,%d,%d", &date,&month,&year);
    printf("Your birth date is %d-%d-%d\n", date,month,year);    

    //another way to implement skip character via scanf
    int mark1,mark2,mark3;
    printf("Enter three marks that you received: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    printf("The three marks are %d, %d and %d.\n", mark1,mark2,mark3);
    //ide

}