//sebin sebastian
//calculation of average of 4 numbers

#include <stdio.h>
int main()
{
    float average,x,y,z,p;
    printf("Enter 4 numbers to find their average: ");
    scanf("%f%f%f%f", &x,&y,&z,&p);
    average = (x+y+z+p)/4.0;
    printf("the average of %f,%f,%f,%f is %f \n", x,y,z,p,average);
    return 0;
}