//sebin sebastian
//06/01/2022
//C program to check whether a character is vowel or consonant using switch statement


#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a alphabet only:");
    scanf("%c",&ch);


    if ( ch < 'z' && ch > 'a' || ch <'Z' && ch > 'A')
    {
        switch (ch)
        {
            case 'a': 
                printf("Vowel\n");
                break;
            
            case 'e':
                printf("Vowel.\n");
                break;

            case 'i':
                printf("Vowel.\n");
                break;

            case 'o':
                printf("Vowel.\n");
                break;

            case 'u':
                printf("Vowel.\n");
                break;

            case 'A':
                printf("Vowel.\n");
                break;

            case 'E':
                printf("Vowel.\n");
                break;

            case 'I':
                printf("Vowel.\n");
                break;

            case 'O':
                printf("Vowel.\n");
                break;

            case 'U':
                printf("Vowel.\n");
                break;

            default :
                printf("Consonant.\n");
                break;
            

        }
    }

    else 
    {
        printf("Enter a valid alphabet.\n");
    }
    
}
