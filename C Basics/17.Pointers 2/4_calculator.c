//sebin sebastian
//10/02/2022
//Write a function that can take two integers as input, and gives 5 outputs : 
//addition, subtraction, multiplication, quotient and reminder of those two numbers. 
//Print the outputs in the main function.

#include <stdio.h>
int calculate (int* x, int* y, int* add, int* sub, int* mul, int* qou, int*rem);

int main()
{
    int x, y, add,sub,mul,qou,rem;
    printf("Enter two integers: ");
    scanf("%d %d",&x,&y);
    calculate (&x, &y, &add, &sub, &mul, &qou, &rem);
    printf("Add: %d\nSub: %d\nMul: %d\nQou: %d\nRem: %d\n",add,sub,mul,qou,rem);
}

int calculate (int* x, int* y, int* add, int* sub, int* mul, int* qou, int*rem)
{
    //addition
    *add = *x + *y;
    *sub = *x - *y;
    *mul = *x * *y;
    *qou = *x / *y;
    *rem = *x % *y;

}