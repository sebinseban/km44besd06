//sebin sebastian
//04/02/2022
//Write a program to implement the string length functionality in a seperate function.
//int strlen (char str[]);

#include <stdio.h>

int strLen ( char str[]);

int main()
{
    //first ask the user for a string
    //then find the length of that string

    // Ask user of input and store it in an array
    char str[25];
    int result;
    printf("Press enter to notify end of string. Only first 24 characters will be read.\nEnter a string: ");
    scanf("%24[^\n]s",str);
    

    result = strLen(str);
    printf("The length of the string is : %d\n",result);
}

int strLen ( char str[])
{
    int i = 0 ; 
    while ( str[i] != '\0')
    {
        i++;
    }
    return i;
}