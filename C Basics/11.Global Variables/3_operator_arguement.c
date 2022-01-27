//sebin sebastian
//27/01/2022
//Create the operand variables as global variables and 
//the operator as an argument. result should be printed in function itself without returning.

#include <stdio.h>


float Calculator(char ch);

float a,b,sum = 0;
char ch;



int main()
{
    
    
    printf("Enter two numbers in the order x * y: ");
    scanf("%f %c %f",&a,&ch,&b);

    Calculator(ch);  
}

float Calculator(char ch)
{
    if (ch == '+')
    printf("SUM: %0.2f\n",a + b);
    
    else if (ch == '-')
    printf("Difference: %0.2f\n", a - b);
    

    else if (ch == '*')
    printf("Product: %0.2f\n",a * b);
    
    else if (ch == '/')
    printf("Quotient: %0.2f\n",a / b);
    
    else if (ch == '%')
    printf("Remainder: %d\n",(int)a % (int)b);

    return 0;
    

}

