//sebin sebastian
//23/01/2022
/*Write a function to determine if a character is alphanumeric or not. 
Hint: function can return a number to indicate alphanumeric (1) or not(0) 
and print the appropriate message in main function.*/

#include <stdio.h>

int alphaNumeric(char ch)
{
    if ( ch <= 'z' && ch >= 'a' || ch <= 'Z' && ch >= 'A' || ch <= '9' && ch >= '0')
    {
        return 1;
    }
    else   
    {
        return 0;
    }
}

int main()
{
    char ch;
    printf("Enter an alphanumeric character:");
    scanf("%c",&ch);
    
    if (alphaNumeric(ch) == 1)
    {
        printf("Alphanumeric.\n");
    }
    else 
    {
        printf("Not alphanumeric.\n");
    }

}