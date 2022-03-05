//sebin sebastian
//05/03/2022
//Write the calculator program using array of function pointers.


//ignore mod function

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
    //for mod(), it accepts only int
    int c = 10, d = 5;

    //creating a function pointer array, where each element returns void and 
    //takes 2 float values as arguements
    /*
    void (*calc[4])(float,float);

    //calc[0] stores address of function add()
    calc[0] = &add;
    (*calc[0])(a,b);

    //calc[1] stores address of function sub()
    calc[1] = &sub;
    (*calc[1])(a,b);

    //calc[2] stores address of function mul()
    calc[2] = &mul;
    (*calc[2])(a,b);

    //calc[3] stores addrss of function div()
    calc[3] = &div;
    (*calc[3])(a,b);   
    */

   //the above method is correct
   //you could also initialize the values into array in this way also

    //creating an array and storing values directly
    void (*calc[4])(float,float) = {add,sub,mul,div};
        
    (*calc[0])(a,b);
    (*calc[1])(a,b);
    (*calc[2])(a,b);
    (*calc[3])(a,b);

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
