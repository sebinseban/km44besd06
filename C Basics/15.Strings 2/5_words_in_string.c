//sebin sebastian
//06/02/2022
//Write a program to count the total words in a string. 
//int countWords (char str[]);

#include <stdio.h>

int countwords (char str[]);

int main()
{
    char str[25];
    printf("Enter string: ");
    scanf("%24[^\n]s",str);

    printf("Total words : %d \n",countwords(str) );


}

int countwords (char str[])
{
    int count = 0;
    int count_spaces = 0;

    //count total spaces
    
    for (int i = 0;  str[i] != '\0' ; i++)
    {
        if ( str[i] == ' ')
        {
            count++;
        }
    }
    return count+1;
}