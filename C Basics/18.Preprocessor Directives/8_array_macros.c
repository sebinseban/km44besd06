//sebin sebastian
//14/02/2022
//Define  a macro that receives an array and the number of elements in the array as arguments. 
//Write a macro definition to print the array elements and call the macro. 
//Use it for different data types and size of the arrays.

#include <stdio.h>
#define size 5
#define arr(arr,size,fmt_specifier) for(int i = 0; i < size ; i++)\
{\
    printf(#fmt_specifier"\n",arr[i]);\
}\
printf("\n");\

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    float arr1[7] = {1.12, 23.213, 43.23, 4345.99, 123.324, 456.6, 123.08};
    double arr2[8] = {123.343, 1123.032432, 999.234, 999999.234, 76.23, 345.456, 1.1111, 456.768 };

    //passing in different datatype arrays, different size for arrays, and different format specifiers
    arr(arr,6,%d);
    arr(arr1,7,%f);
    arr(arr2,8,%lf);

    /* copied from preprocessor file
    for(int i = 0; i < 6 ; i++){ printf("%d""\n",arr[i]);}printf("\n");;
    for(int i = 0; i < 7 ; i++){ printf("%f""\n",arr1[i]);}printf("\n");;
    for(int i = 0; i < 8 ; i++){ printf("%lf""\n",arr2[i]);}printf("\n");;*/
}
}