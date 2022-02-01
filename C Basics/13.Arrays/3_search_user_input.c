//sebin sebastian
//01/02/2022
//Write a program to search for a specific element given by the user, in an array and display its index. 

#include <stdio.h>

//function definition for printing subscript for i 
void printSubScript(int n); 

int main()
{
    int input,n,count = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter integer that you want to search for: ");
    scanf("%d",&input);
    printf("Enter %d elements: ", n);

    // Loop to store n values into an array of size n
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Loop to search for the element that you want to find
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == input)
        {
            printf("Element %d found in array. ",input);
            printf("It is at %d",i+1);
            printSubScript(i);
            printf(" index.\n");
            //used this method because else it will print not found i times
            //count variable is used to detect if not an element
            count++;        
        }
    }
    if (count == 0)
    {
        printf("Element not a member of array.\n");
    }
}
//function definition for printing subscript of i, already wrote in previous assignment
//power of modularity
void printSubScript(int n)
{
    int d = n % 10;
    switch (d)
     {
        case 1:
            printf("st");
            break;
        case 2:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");

    }
    
}