//sebin sebastian
//09/02/2022
// declare different pointers with different base data types. 
//Print the sizes of the pointer variables using sizeof operator.
//Why do u think all of them are giving same size irrespective of the data type ?

#include <stdio.h>

int main()
{
    int *p1;
    float *p2;
    char *p3;
    double *p4;

    printf("Size of int: %lu\n",sizeof(p1));
    printf("Size of float: %lu\n",sizeof(p2));
    printf("Size of char: %lu\n",sizeof(p3));
    printf("Size of double: %lu\n",sizeof(p4));
}