//sebin sebastian
//04/02/2022
//check if a character is alphabet or not using logical operators

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
   // printf("This: %c\n",ch);

    if (ch <= 'z' && ch >= 'a'  || ( ch <= 'Z' && ch >= 'A'))
    {
        printf("Alphabet.\n");
    }
    else 
    {
        printf("Not alphabet.\n");
    }




}