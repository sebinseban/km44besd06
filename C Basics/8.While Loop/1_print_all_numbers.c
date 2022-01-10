//sebin sebastian
//10/01/2022
//Write a program to print all numbers from 1 to n

#include <stdio.h>

int main()
{
    int input, i = 1;
    printf("Enter a integer:");
    scanf("%d",&input);

    while (i != input + 1)
    {
        printf("%d\n",i);
        i++;
    }
    //printf("%d\n",i);
}