//sebin sebastian
//Read a character and print its ascii value, and vice versa.

#include <stdio.h>
int main()
{   
    int x;
    char c;
    printf("Enter a single character:");
    scanf("%c", &c);
    printf("The corresponding ASCII value is:%d\n",c);   //converting char to ASCII value


    printf("Enter an integer: ");        
    scanf("%d", &x);
    printf("The user entered value is :%c ", x);  //converting integer to char
}