//sebin sebastian
//20/02/2022
//Create a dynamic array of integers. Take input from user , sort the array and display the output.

#include <stdio.h>
#include <stdlib.h>

void sort(int * p, int size);
int input;
int main()
{
    
    printf("Enter size of array: ");
    scanf("%d",&input);
    int *p ;
    p = (int *)malloc( input * sizeof(int));

    for (int i = 0 ; i < input ; i++)
    {
        printf("Enter input p[%d]",i + 1);
        scanf("%d",&p[i]);
    }
    sort( p, input);

    for (int i = 0 ; i < input ; i++)
    {
        printf("%d\t",p[i]);
        //scanf("%d",&p[i]);
    }
}

void sort(int * k, int size)  
{
    int t;
    for (int i = 0;  i < size - 1 ; i++)
    {
        for(int j = 0; j < size - i - 1 ; j++)
        {
            if ( k[j] > k[j + 1])
            {
                t = k[j];
                k[j] = k[j + 1];
                k[j+1] = t;
            }
        }

    }
    
}
