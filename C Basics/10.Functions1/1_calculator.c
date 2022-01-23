//sebin sebastian
//23/01/2022
/*Modify the calculator program - write functions ,Add(),Sub(),Mul(),Div(),Mod(). 
Each function should take the 2 numbers as inputs parameters and return the result as output. 
Print the result in main function, in switch statement.  */

#include <stdio.h>

float Add(float a , float b,float sum)
{
    sum = a + b;
    return sum;
}

float Sub(float a, float b,float sum)
{
    sum = a - b;
    return sum;
}

float Mul(float a, float b,float sum)
{
    sum = a * b;
    return sum;
}

float Div (float a,float b,float sum)
{
    sum = a / b;
    return sum;
}

int Mod (int a,int b,int sum)
{
    sum = a % b;
    return sum;
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
            printf("SUM: %0.2f\n",Add(x,y,sum));
            break;

        case '-':
            printf("Difference: %0.2f\n",Sub(x,y,sum));
            break;

        case '*':
            printf("Product: %0.2f\n",Mul(x,y,sum));
            break;

        case '/':
            printf("Quotient: %0.2f\n",Div(x,y,sum));
            break;

        case '%':
            printf("Remainder: %d\n",Mod((int)x,(int)y,sum));
            break;
    }

}
