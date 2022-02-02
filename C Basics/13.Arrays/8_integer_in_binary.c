//sebin sebastian
//02/02/2022
//Write a program to print an integer in binary format.

#include <stdio.h>

int main()
{
    int input, temp,div ;


    int arr[32] = {};   //why 32 , each digit will take 4 bits


    printf("Enter an integer: ");
    scanf("%d",&input);

    for (int i = 32 - 1 ; i > 0 ; i--)
    {
        if (input % 2 != 0)
        {
            arr[i] = 1;
        }
        if (input % 2 == 0)
        {
            arr[i] = 0;
        }
        input = input / 2;
    }
    
    // Loop to print the contents of array
    printf("Binary: ");
    for (int i = 0 ; i < 32 ; i++ )
    {
        printf("%d",arr[i]);
    }
    printf("\n");
        
    
}