//sebin sebastian
//02/01/2021
//Take an integer as input and print its magnitude (remove sign)

#include <stdio.h>
int main()
{
    int input = 0, temp = 0;
    printf("Enter an integer (positive or negative) :");
    scanf("%d",&input);
    temp = input;

    if (input >= 0)
    {
        printf("The sign magnitude form of %d is : %d\n", temp, input);
    }
    else 
    {
        input = -input;
        printf("The sign magnitude form of %d is : %d\n", temp, input);
    }
    
}