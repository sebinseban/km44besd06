//sebin sebastian
//11/02/2022
//WAP to identify whether a architecture is Little Endian or Big Endian?

#include <stdio.h>
int main()
{
    int x = 0x12345678;
    int*p_x = &x;
    //in little endian, lsb is stored is msb

    //find 1st byte address and then compare
    //total 32 bits i.e 4 bytes i.e 4 chunks of 8 bits

    char* p1 = (char*)p_x;
    if (*p1 == 0x78)
    {
        printf("Little endian.\n");
    }
    if (*p1 == 0x12)
    {
        printf("Big endian.\n");
    }

}