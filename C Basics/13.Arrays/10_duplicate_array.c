//sebin sebastian
//02/02/2022
//Write a code in C to receive an array of different integer values, and produce another array (list) of only the duplicated values in the original array, 
//if a duplicate value is found more than once, the list shall only show one value, order is not important.

#include <stdio.h>

int main()
{
    int size,count = 0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    int arr_new[10] = {};

    // Load values from user into the array
    printf("Array: ");
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printf("\n");

    // Copy contents of original array to a duplicate array first
    //no need
    /*
    for (int i = 0; i < size ; i++)
    {
        arr_new[i] = arr[i];
    } */
    /*just printing contents of newly created array
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr_new[i]);
    }  */
  
    // Store only duplicated values in the new array  eg: {1,2,2,2,3,3,4,5,5,5} => {2,3,5}



    int compare_value = 0;
    int j_counter = 0;
    printf("New array with repeated elements only : ");
    for (int i = 0 ; i < size ; i++)
    {      
        for (int j = i + 1; j < size ; j++)
        {     
            if ( arr[i]== arr[j])
            {
                arr_new[i] = arr[i];
                printf("repeated at j =  %d\n",arr[i]);
                printf("%d\t",arr_new[i]);
                //count++;          
            }
            /*if (count == 2)
            {
                printf("repeated at j =  %d\n",j);
                arr_new[j_counter] = arr[j];
                j_counter++;
                break;
            }*/
        }
        
        compare_value++;
        count = 0;
    }
    
    //print the new array with repeated elements
    //printf("New array with repeated elements only : ");
    /*for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr_new[i]);
    }
    printf("\n"); */
    
}