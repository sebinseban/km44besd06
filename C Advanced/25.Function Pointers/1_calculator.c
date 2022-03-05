//sebin sebastian
//25/02/2022
//Write the calculator program using function pointers.

#include <stdio.h>

void add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);
void mod (int a,int b);


int main()
{
    float a,b;
    printf("Enter a: ");
    scanf("%f",&a);
    getchar();
    printf("Enter b: ");
    scanf("%f",&b);
    int c = 10, d = 5;

    //creating a function pointer
    //add_fp is a pointer to function add()
    void (*add_fp)(float,float);
    add_fp = &add;
    (*add_fp)(a,b);

    //sub_fp is a pointer to function sub()
    void (*sub_fp)(float,float) = &sub;
    (*sub_fp)(a,b);

    //mul_fp is a pointer to function mul()
    void (*mul_fp)(float,float) = &mul;
    (*mul_fp)(a,b);

    //div_fp is a pointer to function div()
    void (*div_fp)(float,float) = &div;
    (*div_fp)(a,b);

    //mod_fp is a pointer to function mod()
    void (*mod_fp)(int,int) = &mod;
    (*mod_fp)(c,d);
}

void add(float a , float b)
{
    float sum = a + b;
    printf("Add: %0.2f + %0.2f = %0.2f\n",a,b,sum);
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

void mod (int a,int b)
{
    int sum = a % b;
    printf("Mod: %d %% %d = %d\n",a,b,sum);
}
