//sebin sebastian
//20/01/2022
//Write a program to calculate the sum of n positive numbers exactly
//(if the user enters any negative numbers, they are not counted,
//only positive numbers are counted till n).

#include <stdio.h>
int main()
{
    int input, sum = 0, temp;
    printf("Enter total inputs ");
    scanf("%d",&input);

    for (int i = 0; i < input ; i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&temp);

        if (temp >= 0)
            sum = sum + temp;
    }
    printf("Total sum is: %d\n",sum);
}