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

    
    if (input >= 97)
    {
        if(input <= 122)
        {
            printf("The input is a (small letter) alphabet.\n");
        }
        else 
        {
            printf("Enter a valid alphabet.\n");
        }
    }

    else if (input >= 65)
    {
        if(input <= 90)
        {
            printf("The input is a (capital letter) alphabet.\n");
        }
        else 
        {
            printf("Enter a valid alphabet.\n");
        }


    }
    else 
    printf("Enter a valid alphabet.\n");

    
   



}