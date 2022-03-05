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
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
void giveMeFunction( float (*add_fp)(float , float) , float a, float b );


int main()
{
    printf("Enter a: ");
    scanf("%f",&a);
    getchar();
    printf("Enter b: ");
    scanf("%f",&b);
    
    //can also use this method, but array seems more faster and efficient
    //float (*add_fp)(float,float);
    //add_fp = &add;

    float (*calc[4])(float,float) = {add,sub,mul,div};


    giveMeFunction(calc[0],a,b);
    giveMeFunction(calc[1],a,b);    
    giveMeFunction(calc[2],a,b);
    giveMeFunction(calc[3],a,b);
}

float add(float a , float b)
{
    float sum = a + b;
    printf("Addition: ");
    //printf("Add: %0.2f + %0.2f = %0.2f\n",a,b,sum);
    return sum;
}

float sub(float a, float b)
{
    float sum = a - b;
    printf("Subraction:");
    //printf("Sub: %0.2f - %0.2f = %0.2f\n",a,b,sum);
    return sum;
}

float mul(float a, float b)
{
    float sum = a * b;
    printf("Multiplication: ");
    //printf("Mul: %0.2f * %0.2f = %0.2f\n",a,b,sum);
    return sum;
}

float div (float a,float b)
{
    float sum = a / b;
    printf("Division:");
    //printf("Div: %0.2f / %0.2f = %0.2f\n",a,b,sum);
    return sum;
}

void giveMeFunction( float (*add_fp)(float , float) , float a, float b )
{
    printf("%f\n", add_fp(a,b));
}