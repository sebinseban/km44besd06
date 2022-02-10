//sebin sebastian
//10/02/2022
//Write a program to swap two numbers using Call by Value and Call by Reference.

#include <stdio.h>
void callByValue(int x, int y);
void callByReference(int *a, int *b);
int main()
{
    //swap x and y by call by value
    //swap a and b by call by reference
    int x,y;
    int a,b;
    printf("Enter 2 integers x and y: ");
    scanf("%d %d",&x,&y);
    printf("Enter 2 integers a and b: ");
    scanf("%d %d",&a,&b);

    callByValue(x,y);
    callByReference (&a,&b);
    printf("a and b after swap: %d %d\n",a,b);
}

void callByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("x and y after swap: %d %d\n",x,y);
}

void callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
    
}