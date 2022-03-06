//sebin sebastian
//05/03/2022
//Write a program to read an integer and print it back using function pointers for printf and scanf.

#include <stdio.h>

int main()
{
    //scanf_fp is a pointer to  library function scanf()
    int (*scanf_fp)(const char *, ...) = scanf;

    //printf_fp is a pointer to  library function printf()
    int (*printf_fp)(const char *, ...) = printf;
    
    int x;    
    (*printf_fp)("Enter an integer: ");
    (*scanf_fp)("%d",&x);
    (*printf_fp)("%d\n",x);
}