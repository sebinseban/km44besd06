//sebin sebastian
//27/01/2022
//Create the operand variables as global variables and 
//the operator as an argument. result should be printed in function itself without returning.

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
            

    }    
}

float Add()
{
    printf("SUM: %0.2f\n",a + b);
    return 0;
     
}

float Sub()
{
    printf("Difference: %0.2f\n", a - b);
    return 0;
    
}

float Mul()
{
    printf("Product: %0.2f\n",a * b);
    return 0;
}

float Div ()
{
    printf("Quotient: %0.2f\n",a / b);
    return 0;
}

int Mod ()
{
    printf("Remainder: %d\n",(int)a % (int)b);
    
    return 0;
}
