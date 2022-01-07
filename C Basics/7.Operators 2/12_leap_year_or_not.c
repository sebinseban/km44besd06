//sebin sebastian
//07/02/2022
//check if an year is leap year or not.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter an year:");
    scanf("%d", &year);

    year % 100 == 0 ? year % 400 == 0 ? printf("Leap year.\n") : printf("Not leap year.\n") : year % 4 == 0 ? printf("Leap year.\n") : printf("Not leap year.\n");
}