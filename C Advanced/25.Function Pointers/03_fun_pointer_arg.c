//sebin sebastian
//05/03/2022
/*Write the calculator program using a function that accepts a function pointer as argument and invokes it.
        eg., fptr = ADD;
        invokeptr(fptr);
        invokeptr(int (*fptr) (int,int))
        {
            printf("%d\n",fptr(3,4));
        }  */

#include <stdio.h>

float a,b;

float add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);
void giveMeFunction( float (*add_fp)(float , float) , float a, float b );


int main()
{
    printf("Enter a: ");
    scanf("%f",&a);
    getchar();
    printf("Enter b: ");
    scanf("%f",&b);
    
    float (*add_fp)(float,float);
    add_fp = add;

    giveMeFunction(add_fp,a,b);    
}

float add(float a , float b)
{
    float sum = a + b;
    //printf("Add: %0.2f + %0.2f = %0.2f\n",a,b,sum);
    return sum;
}

void sub(float a, float b)
{
    float sum = a - b;
    printf("Sub: %0.2f - %0.2f = %0.2f\n",a,b,sum);
}

void mul(float a, float b)
{
    float sum = a * b;
    printf("Mul: %0.2f * %0.2f = %0.2f\n",a,b,sum);
}

void div (float a,float b)
{
    float sum = a / b;
    printf("Div: %0.2f / %0.2f = %0.2f\n",a,b,sum);
}

void giveMeFunction( float (*add_fp)(float , float) , float a, float b )
{
    printf("%f\n", add_fp(a,b));
}