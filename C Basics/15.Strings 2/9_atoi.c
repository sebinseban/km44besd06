//sebin sebastian
//07/02/2022
//Write a program to convert strings to integer. 
//Read documentation of atoi function. int atoi (char str[]);

#include <stdio.h>

int aToi (char str[]);


int main()
{
    char s1[25];
    printf("String 1: ");
    scanf("%24[^\n]s",s1);

    int value = aToi(s1);
    printf("Value: %d\n",value);

}

int aToi (char str[])
{
    int temp = 0;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        temp = temp * 10 + str[i] - '0';
    }
    return temp;
}