//sebin sebastian
//write a program that reads an integer and displays the right-most digit of the number.
//(Eg: User enters, 456, the output should be 6).

#include <stdio.h>
int main()
{
    
    int x = 0;
    int y = 0;
    printf("Enter a multi-digit integer: ");    //ask user to enter input
    scanf("%d", &x);                            //store the user input in x
    y = x % 10;                                 //using modulus operator, find the last digit of the user input


    printf("The right most digit of %d is : %d\n", x, y); 
   

}