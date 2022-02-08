//sebin sebastian
//06/02/2022
//Write a program to check if all characters are digits or not. 
//int isNumeric (char str[]);

#include <stdio.h>

int isNumeric (char str[]);

int main()
{
    char str[25];
    printf("Enter string: ");
    scanf("%24[^\n]s",str);

    int result = isNumeric(str);

    if (result == 0)
    {
        printf("All characters are numbers.\n");
    }
    else 
    {
        printf("Not all characters are numbers.\n");
    }
}
int isNumeric (char str[])
{
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if ( !(str[i] >= '0' && str[i] <= '9' ) )
        {
            return -1;
        }
    }
    return 0;
}

