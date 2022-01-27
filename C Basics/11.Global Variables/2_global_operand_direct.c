//sebin sebastian
//27/01/2022
// Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. 
//Function return value should be stored in another global variable in operations file and be used to print in main.

#include <stdio.h>
int Mod ();
float Add();
float Sub();
float Mul();
float Div ();


float a,b,sum = 0;
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
    sum = (int)a % (int)b;
    return sum;
}
