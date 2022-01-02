//sebin sebastian
//01/01/2021
//For one type of mobile service, 
//if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls.     
//Write a program to read number of calls made and compute and print the bill.

#include <stdio.h>
int main()
{
    int x = 0;
    float y = 0;
    printf("Enter calls made: ");
    scanf("%d",&x);

    if (x <= 100)
    {
        printf("Cost is 250.\n");
    }
    else 
    {
        y = x - 100;
        y = y * 1.25;
        printf("Cost is %f.\n", 250 + y);
    }

}