//sebin sebastian
//07/02/2022
//Write a program to print the size of various data types in C


#include <stdio.h>

int main()
{
    printf("Size of int is : %lu bytes.\n", sizeof(int));
    printf("Size of unsigned int is : %lu bytes.\n", sizeof(unsigned int));
    printf("Size of short int: %lu bytes.\n", sizeof(short int));
    printf("Size of short unsigned int: %lu bytes.\n", sizeof(short unsigned int));
    printf("Size of long signed int: %lu bytes.\n", sizeof(long signed int));
    printf("Size of float: %lu bytes.\n", sizeof(float));
    printf("Size of double: %lu bytes.\n", sizeof(double));
    printf("Size of long double: %lu bytes.\n", sizeof(long double));
    printf("Size of signed char: %lu bytes.\n", sizeof(signed char));
    printf("Size of unsigned char: %lu bytes.\n", sizeof(unsigned char));
}