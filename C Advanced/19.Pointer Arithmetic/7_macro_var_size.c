//sebin sebastian
//15/02/2022
//Implement a macro to find the size of a variable.

#include <stdio.h>
#define SIZEOF(x) (char* )(&x + 1) - (char* )(&x)

int main()
{
    int x = 5;
    float y = 999.999;
    double z = 23423.34;
    int arr[10];

    printf("Int variable size: %ld\n", SIZEOF(x));
    printf("Float variable size: %ld\n", SIZEOF(y));
    printf("Double variable size: %ld\n",SIZEOF(z));
    printf("Int array size: %ld\n",SIZEOF(arr));

}