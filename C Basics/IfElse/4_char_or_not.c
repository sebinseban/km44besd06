//sebin sebastian
//01/02/2021
//check if a character is alphabet or not

#include <stdio.h>
int main()
{
    char input;
    printf("Enter a character:");
    scanf("%c",&input);
    //printf("the entered char is:%c\n",input);

    if (input <= 90)
    {
        if(input >= 65)
        {
            printf("The input is a (capital letter) alphabet.\n");
        }
    }
    if (input <= 122)
    {
        if(input >= 97)
        {
            printf("The input is a (small letter) alphabet.\n");
        }
    }
    if (input < 65)
    {
        if(input > 0)
        {
                    printf("Enter a valid alphabet.\n");

        }
    }
   



}