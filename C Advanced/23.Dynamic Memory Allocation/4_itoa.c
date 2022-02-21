//sebin sebastian
//21/02/2022
/*Implement itoa function and return the string from the function. Print the result in main.
itoa function takes an integer as input,converts it into a numerical string and returns it.
        eg., input a number: 123
        output: 123*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkIsAlpha(char string3[]);
int  aToi (char string2[]);
int n;
int main()
{
    int input,value;


    printf("Enter size of string: ");
    scanf("%d",&input);

    char * string1 = malloc(sizeof(char) * input);


    printf("Enter string:");
    scanf("%s",string1);

    value = aToi(string1);
    if (value == 0)
        printf("String entered. Enter an integer.\n");
    else
        printf("Integer value: %d\n",value);

}

int  aToi (char string2[])
{
    int num = 0, temp = 1;;
    n = strlen(string2);

    temp = checkIsAlpha(string2);
    if (temp == 0)
        return 0;

    for (int i = 0; i < n ; i++)
    {
        num = num * 10 + ((int)string2[i]- 48);
    }
    return num;
}

int checkIsAlpha(char string3[])
{
    for (int i = 0; i < n ; i++)
    {
        if ((string3[i] >= 'a' && string3[i] <= 'z' )|| (string3[i] >= 'A' && string3[i] <= 'Z' ) )
        {
            return 0;
        }
    }
    return 5;
}