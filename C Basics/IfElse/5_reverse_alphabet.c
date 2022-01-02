//sebin sebastian
//02/01/2022
//Input an alphabet. Output its case reverse.

#include <stdio.h>

int main()
{
    char alph,temp;
    printf("Enter a char:");
    scanf("%c",&alph);
    temp = alph;

    if (alph >= 97)
    {
        if (alph <= 122)
        {
            alph = alph - 32;
            printf("Reverse case of %c is : %c\n",temp,alph);
        }
        else 
        {
            printf("Enter a valid alphabet.");
        }
    }
    else if (alph >= 65)
    {
        if (alph <= 90)
        {
            printf("Reverse case of %c is :%c\n",temp,alph + 32);
        }
    }
    
    else 
    {
        printf("Enter a valid alphabet..\n");
    }
}