//sebin sebastian
//04/02/2022
//Write a program to reverse all the characters in an array.
//void strrev (char str[]);

#include <stdio.h>

void strRev(char str[]);
int strLen ( char str[]);

int main()
{
    char str[25];
    printf("Enter a string: ");
    scanf("%24[^\n]s",str);

    strRev(str);
    printf("Reversed array: %s\n",str);
    
}

void strRev(char str[])
{
    int last = strLen(str);
    int index = strLen(str) - 1;

    int temp;
    for (int i = 0 ; i < last/ 2; i++)
    {
        temp = str[i];
        str[i] = str[index];
        str[index] = temp;
        index--;
    }
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

