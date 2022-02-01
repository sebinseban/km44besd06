//sebin sebastian
//01/02/2022
/*Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements 
and print them: 
int arr[5] = {}; 
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];*/

#include <stdio.h>

int main()
{
    //example 1
    int arr[5] = {};
    printf("\nExample 1:\n");
    for (int i = 0; i < 5 ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nSize of the above array: %lu \n",(sizeof(arr)) );

    //example 2
    printf("\nExample 2: \n");
    int arr2[10] = {2,4,5,6,7,3};
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\nSize of the above array: %lu \n\n", sizeof(arr2));

    //example 3
    printf("Example 3: \n");
    int arr3[3] = {1,2,3,4,5};
    for (int i = 0 ; i < 3 ; i++)    //change the limit to either 3 or 5
    {
        printf("%d\t",arr3[i]);
    }
    printf("\nSize of the above array: %lu \n\n",sizeof(arr3));

    //example 4
    printf("Example 4: \n");
    int arr4[0] = {};
    for (int i = 0;  i <= 0 ; i++)
    {
        printf("%d\t",arr4[i]);
    }
    printf("\nSize of the above array: %lu \n\n",sizeof(arr4));

    //example 5
    printf("Example 5: \n");
    int arr5[0] = {1,2,3,4,5};
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d\t",arr5[i]);
    }
    printf("\nSize of the above array: %lu \n\n",sizeof(arr5));

    //example 6
    printf("Example 6: \n");
    int arr6[] = {};
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d\t",arr6[i]);
    }
    printf("\nSize of the above array: %lu \n\n",sizeof(arr6));
    
    //example 7
    printf("Example 7: \n");
    int arr7[] = {};
    for (int i = 0 ; i < 5; i++)
    {
        printf("%d\t",arr7[i]);
    }
    printf("\nSize of the above array: %lu \n\n",sizeof(arr7));
}

