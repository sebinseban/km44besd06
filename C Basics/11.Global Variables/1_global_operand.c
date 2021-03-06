//sebin sebastian
//27/01/2022
/*Rewrite the calculator program with add(), sub() etc functions like below:
Here, operand variables mean the variables which store the numbers on which any operation is to be performed.
Operation functions means add(), sub() etc functions.
operator variable is the variable that stores the character '+','-' etc as entered by the user.

1 ) Create the operand variables as global variables and use them in the operation functions directly, 
without passing as arguments. 
Function returns the result as return value. */

#include <stdio.h>
int Mod ();
float Add();
float Sub();
float Mul();
float Div ();


float a,b;
char ch;



int main()
{
    
    
    printf("Enter two numbers in the order x * y: ");
    scanf("%f %c %f",&a,&ch,&b);

    switch(ch)
    {
        case '+':
            printf("SUM: %0.2f\n",Add());
            break;

        case '-':
            printf("Difference: %0.2f\n",Sub());
            break;

        case '*':
            printf("Product: %0.2f\n",Mul());
            break;

        case '/':
            printf("Quotient: %0.2f\n",Div());
            break;

        case '%':
            printf("Remainder: %d\n",Mod());
            break;
    }
    return 0;
}

float Add()
{
    return a + b;
     
}

float Sub()
{
    return a - b;
    
}

float Mul()
{
    return a * b;
    
}

float Div ()
{
    return a / b;
    
}

int Mod ()
{
    return (int)a % (int)b;
    
}
