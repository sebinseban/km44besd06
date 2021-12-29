//sebin sebastian
//calculation of area and perimeter of rectangle,square and circle by taking the appropriate measurement as input.
#include<stdio.h>
int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length and breadth of rectangle: ");
    scanf("%f%f", &length,&breadth);
    area = length*breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of rectangle is %0.2f and the perimeter of rectangle is %0.2f\n", area, perimeter);

    printf("Enter the side of a square: ");
    scanf("%f", &length);
    area = length*length;
    perimeter = 4 * length;
    printf("The area of square is %0.2f and the perimeter of square is %0.2f\n", area,perimeter);

    printf("Enter the radius of the circle: ");
    scanf("%f", &length);
    area = 3.14 * length * length;
    perimeter = 2 * 3.14 * length;
    printf("The area of circle is %0.2f and the perimeter of circle is %0.2f \n", area,perimeter );



    return 0;
    
}