//sebin sebastian
//15/02/2022
//Write a macro to generate a generic function for swapping 2 numbers.

#include <stdio.h>

//int temp, a,b;

#define  swapTwo(fun_name, datatype,x,y,format_specifier) datatype fun_name(datatype x, datatype y)\
                                    {\
                                        datatype temp = x;\
                                        x = y;\
                                        y = temp;\
                                        printf(#x":"#format_specifier"\t"#y":"#format_specifier"\n",x,y);\
                                    }\

int main()
{
    //create some variables of different datatype
    int a = 1, b= 2;
    float c = 1.2, d = 3.4;
    double e = 5.999, f = 0.123;

    //macro call will name for macro,datatype,variables, and format specifier
    swapTwo(intSwap,int,a,b,%d)
    printf("%d %d",a,b);
    swapTwo(floatSwap,float,c,d,%f)
    swapTwo(doubleSwap,double,e,f,%lf)
    
}
