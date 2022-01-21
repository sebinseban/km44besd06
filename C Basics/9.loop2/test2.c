#include <stdio.h>

int main()
{
    int digit,power,new,temp,sum = 0;
    printf("Enter power: ");
    scanf("%d %d",&digit,&power);

    temp = power - 1;
    new = temp * digit;

    for (int i = 0; i < new; i++)
    {
        sum = sum + digit;
    }
    printf("The power is : %d",sum);
}