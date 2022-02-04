//sebin sebastian
//04/02/2022
//Write a program to convert all the characters in an array to uppercase letters.
//void strupr (char s[]);

#include <stdio.h>

void strUpr(char s[]);

int main()
{
    char s[25];
    printf("Enter a string: ");
    scanf("%24[^\n]s",s);

    strUpr(s);
    printf("Array in uppercase : %s\n",s);
}

void strUpr(char s[])
{
    for (int i = 0 ; s[i] != '\0'; i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            s[i] = s[i] - 32;
        }
    }

}