//sebin sebastian
//04/02/2022
//check if a character is vowel or not using logical operators

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a alphabet:");
    scanf("%c",&ch);

    if( ch <= 'z' && ch >= 'a' || ch <= 'Z' && ch >= 'A')
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("Vowel.\n");
        }
        else 
        {
            printf("Consonant.\n");
        }
    }
    else 
    {
        printf("Enter a valid alphabet.\n");
    }
}
