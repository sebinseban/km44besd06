//sebin sebastian
//14/02/2022
//Write a macro to print the biggest of three values.
//Try to call it and print the result for different data types, integer, float, double and character.

#include <stdio.h>

#define max_of_three(a,b,c) int array[] = {a,b,c};\
    int max = array[0];\
    int length = sizeof (array) / sizeof(array[0]);\
    for (int i = 0; i < length ; i++)\
    {\
        if (array[i] > max)\
        {\
            max = array[i];\
        }\
    }\

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    

    max_of_three(a,b,c)



    printf("%d\n",max);
}