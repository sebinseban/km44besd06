//sebin sebastian
//10/02/2022
//WAP copy 0x20 data in to 0x7800 memory location?

#include <stdio.h>

int main()
{
    //if you want to store data in a particular address
    //first store that address in a pointer
    int* p= (int*)0x1233FF78;
    p = 0x20;

    printf("%d\n",*p);
}