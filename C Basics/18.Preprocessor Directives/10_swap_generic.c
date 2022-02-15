//sebin sebastian
//15/02/2022
//Write a macro to generate a generic function for swapping 2 numbers.

#include <stdio.h>
#define  swapTwo(fun_name, datatype,x,y,format_specifier) datatype fun_name(datatype x, datatype y)\
                                    {\
                                        datatype temp = x;\
                                        x = y;\
                                        y = temp;\
                                        printf(#x":"#format_specifier"\t"#y":"#format_specifier"\n",x,y);\
                                    }\

swapTwo(intSwap,int,a,b,%d)
swapTwo(floatSwap,float,c,d,%f)
swapTwo(doubleSwap,double,e,f,%lf)

//invoke the functions first that you are going to call
int main()
{
    //create some variables of different datatype
    int a = 1, b= 2;
    float c = 1.2, d = 3.4;
    double e = 5.999, f = 0.123;

    //macro call will name for macro,datatype,variables, and format specifier
    //call the functions outside main function
    intSwap(a,b);
    floatSwap(c,d);
    doubleSwap(e,f);
    
    
}
