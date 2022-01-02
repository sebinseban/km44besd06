//sebin sebastian
//02/01/2022
//C program to check whether a character is vowel or consonant using if else only

#include <stdio.h>
int main()
{
    char input;
    printf("Enter a char in lower case:");
    scanf("%c",&input);

    if (input >= 97)
    {
        if(input <= 122)
        {
            if (input == 'a')
            {
                printf("Vowel\n");
            }
            else if(input == 'e')
            {
                printf("Vowel\n");
            }
            else if(input == 'i')
            {
                printf("Vowel\n");
            }
            else if(input == 'o')
            {
                printf("Vowel\n");
            }
            else if(input == 'u')
            {
                printf("Vowel\n");
            }
            else 
            {
                printf("Consonants\n");
            }
        }
    }
    else 
    {
        printf("Enter a valid character.\n");
    }
}