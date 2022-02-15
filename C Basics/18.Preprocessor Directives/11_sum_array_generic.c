//sebin sebastian
//15/02/2022
//Write a macro to generate a generic function to compute the sum of all elements in an array.

#include <stdio.h>
int i;
#define sumArray(arr,fun_name,datatype,size,format_specifier,var) datatype var = 0;\
var = arr[0];\
for(i = 0; i < size; i++)\
{\
    arr[0] = arr[0] + arr[i];\
}\
printf("Sum of "#datatype":" #format_specifier "\n",arr[0] - var);\

int main()
{
    int arr[4] = {10,2,3,4};
    float arr2[6] = {1.2, 3.4, 5.6, 7.8 , 8.9,23.5};
    double arr3[3] = {1.111, 3.45, 5.99};
    sumArray(arr,int_sum,int,4,%d,q)
    sumArray(arr2,float_sum,float,6,%f,p)
    sumArray(arr3,double_sum,double,3,%lf,r)


}