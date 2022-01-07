//sebin sebastian
//07/01/2022
//For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls.
//Write a program to read number of calls made and compute and print the bill.

#include <stdio.h>

int main()
{
    int calls;
    printf("Enter total calls made: ");
    scanf("%d",&calls);

    ( calls <= 100) ? printf("Total cost: 250\n") : printf("Total cost: %0.2f\n", 250 + (calls - 100) * 1.25);
}