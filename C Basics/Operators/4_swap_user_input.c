//sebin sebastian
/*Read 2 integer variable values and swap their values and print back
        eg.. a value 5
        b value 8

        output: a value is 8 
        b value is 5 */

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A value: ");
    scanf("%d",&a);
    printf("Enter B value: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("After swapping A: %d \nAfter Swapping B: %d \n",a,b);

    
}
