//sebin sebastian
//09/02/2022
//Write a program to take input 
//for two character variables using pointers and find out which character has higher ascii value.

#include <stdio.h>

int main()
{
    char c1,c2;
    char *p1, *p2;
    p1 = &c1;
    p2 = &c2;

    printf("Enter two characters: ");
    scanf("%c %c",p1,p2);
    //printf("%c %c \n",*p1, *p2);

    if (*p1 > *p2)
    {
        printf("%c has higher ascii value.\n",*p1);
    }
    else
    {
        printf("%c has higher ascii value.\n",*p2);
    }

}