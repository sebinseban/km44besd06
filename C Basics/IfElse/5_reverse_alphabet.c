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

    if (alph >= 97)                                                 //check if the character is small letter
    {
        if (alph <= 122)                                            //range for small letter
        {
            alph = alph - 32;                                      //convert to upper case
            printf("Reverse case of %c is : %c\n",temp,alph);
        }
        else                                                       //if user entered other than alphabet, show error message
        {
            printf("Enter a valid alphabet.");
        }
    }
    else if (alph >= 65)                                                                    //check if character is capital letter
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