//sebin sebastian
//24/01/2022
/*Write a function that takes two numbers, a and n as input arguments and
returns the value of a to the power of n without using * operator.

Hint: call the multiplication function in power function. */

#include <stdio.h>

int addTwo(int digit, int power);
int multiplication (int x,int digit_copy);

int main()
{
    int digit, power;
    printf("Enter digit followed by power: ");
    scanf("%d %d",&digit,&power);
    int value = addTwo(digit,power);
    printf("Sum is : %d", value);
}
int addTwo(int digit, int power)

{
    int sum = digit;
    int digit_copy = digit;
    for (int i = 1; i < power ; i++)
    {
        //digit_copy = digit;

        sum = multiplication(digit,digit_copy);
        digit_copy = sum;
    }
    return sum;

}

int multiplication (int x,int digit_copy)
{
    int add = digit_copy;
    for (int i = 1; i < x; i++)
    {
        add = add + digit_copy;
    }
    return add;
}





