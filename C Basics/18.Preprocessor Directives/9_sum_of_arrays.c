//sebin sebastian
//15/02/2022
//Using the above macro, write a program to compute the sum of all elements in an array.

#include <stdio.h>

//passing in the array, type of array, size of array and the format specifier for array
#define arr(arr,type,size,fmt_specifier) for(int i = 0; i < size ; i++)\
{\
    arr[0] = arr[0] + arr[i];\
}\
printf("Sum " #type":" #fmt_specifier "\n",arr[0]-1);\
printf("\n");\

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    float arr1[7] = {1.12, 23.213, 43.23, 4345.99, 123.324, 456.6, 123.08};
    double arr2[8] = {123.343, 1123.032432, 999.234, 999999.234, 76.23, 345.456, 1.1111, 456.768 };

    //passing in different datatype arrays, different size for arrays, and different format specifiers
    arr(arr,integer,6,%d);
    arr(arr1,floating,7,%f);
    arr(arr2,doublee,8,%lf);

    /* copied from preprocessor file
    for(int i = 0; i < 6 ; i++){ printf("%d""\n",arr[i]);}printf("\n");;
    for(int i = 0; i < 7 ; i++){ printf("%f""\n",arr1[i]);}printf("\n");;
    for(int i = 0; i < 8 ; i++){ printf("%lf""\n",arr2[i]);}printf("\n");;*/

}