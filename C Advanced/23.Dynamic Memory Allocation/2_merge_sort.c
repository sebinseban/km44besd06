//sebin sebastian
//21/02/2022
/*Write a function that takes two sorted integer arrays as input, and returns an 
array of integers from both arrays in sorted order, excluding duplicate numbers.

        Assume that the input arrays are sorted.
        eg., array1 : 10,12,13,14,15,16
        array2 : 9,12,15,19,20
        output array3 : 9,10,12,13,14,15,16,19,20 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE1 5
#define SIZE2 5
void mergesort (int * p1, int * p2, int * p3);

int main()
{
    int *p1, *p2, *p3;

    p1 = (int *) calloc (5,sizeof(int));
    p2 = (int *) calloc (5,sizeof(int));
    p3 = (int *) calloc (10,sizeof(int));

    //this is wrong, we cant initialize a dynamic array like this
    //use loop to initialize values
    //p1 = {1,2,3,4,5,6,7,8,9,10};
    printf("Enter 5 sorted elements in array 1: ");
    for (int i = 0 ; i < SIZE1 ; i++)
    {
        //printf("%d\t",p1[i]);
        scanf("%d",&p1[i]);
    }
    printf("Enter 5 sorted elements in array 2: ");
    for (int i = 0; i < SIZE2; i++)
    {
        scanf("%d",&p2[i]);

    }
    mergesort (p1,p2,p3);
    printf("Final array:");
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d\t",p3[i]);
        //scanf("%d",&p[i]);
    }
}

void mergesort (int * p1, int * p2, int * p3)
{
    int i = 0, j = 0, k = 0;
    
    while (i < SIZE1 && j < SIZE2)
    {
        if ( p1[i] < p2[j])
        {
            p3[k++] = p1[i++];
        }
        else
        {
            p3[k++] = p2[j++];
        }
    }

    for( ; i < SIZE1; i++)
    {
        p3[k++] = p1[i];
    }
    
    for(; j < SIZE2 ; j++)
    {
        p3[k++] = p2[j];
    }
}