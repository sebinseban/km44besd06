//sebin sebastian
//06/02/2022
//Write a program to replace all characters in a string with another character.
//`void strchrreplace (char str[], char c1, char c2);`

#include <stdio.h>

void strchrreplace (char str[],char c1, char c2);


int main()
{
    char str[25];
    char c1,c2;
    printf("Enter a string: ");
    scanf("%24[^\n]s",str);
    getchar();
    printf("Enter character to be replaced: ");
    scanf("%c",&c1);

    printf("Enter replacement character: ");
    getchar();
    scanf("%c",&c2);

    strchrreplace(str,c1,c2);
    printf("Updated string : %s\n",str);
}

void strchrreplace (char str[],char c1, char c2)
{
    for (int i = 0 ; str[i] != 0 ; i++)
    {
        if ( str[i] == c1)
        {
            str[i] = c2;
        }
    }
}

