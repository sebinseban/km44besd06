//sebin sebastian
//04/02/2022
//Write a program to convert all characters in an array to lowercase letters.
//void strlwr (char s[]);

#include <stdio.h>

void strLwr (char s[]);

int main()
{
    char s[25];
    printf("Enter array: ");
    scanf("%24[^\n]s",s);

    
    strLwr(s);
    printf("Array in lowercase: %s\n",s);


}

void strLwr (char s[])
{
    int i;
    for (i = 0 ; s[i] != '\0' ; i++)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            s[i] = s[i] + 32;
        }
    }
    
}