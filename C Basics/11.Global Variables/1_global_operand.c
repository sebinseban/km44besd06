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
float a, b,sum=0;
int a_,b_,sum_ = 0;
float Add()
{
    sum = a + b;
    return sum;
}

float Sub()
{
    sum = a - b;
    return sum;
}

float Mul()
{
    sum = a * b;
    return sum;
}

float Div ()
{
    sum = a / b;
    return sum;
}

int Mod ()
{
    sum_ = a_ % b_;
    return sum_;
}

int main()
{
    float x,y,sum = 0;
    char ch;
    printf("Enter two numbers in the order x * y: ");
    scanf("%f %c %f",&x,&ch,&y);

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

}
