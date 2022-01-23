//sebin sebastian
//23/01/2022
//Write a function to return the product of two numbers without using * operator.

#include <stdio.h>

int repeatedAddition(int a,int b)
{
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum = sum + a;
    }
    return sum;
}

int main()
{
    int x,y;
    printf("Enter two numbers to be multiplied: ");
    scanf("%d %d",&x,&y);

    printf("Product is : %d\n", repeatedAddition(x,y));

}