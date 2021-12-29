//sebin sebastian
//Create a variable for every datatype and try scanf and printf on those variables.
#include<stdio.h>


int main()
{
    int a;
    unsigned int b;
    short int c;
    short unsigned int d;
    long int e;
    long unsigned int f;
    float g;
    double h;
    long double i;
    signed char j;
    unsigned char k ;

	printf("Enter a signed int:");
	scanf("%d", &a);
	printf("Enter an unsigned int:");
	scanf("%i", &b);
	printf("Enter a short integer:");
	scanf("%hi", &c);
	printf("Enter an unsigned short integer:");
	scanf("%hu", &d);
	printf("Enter a signed long integer:");
	scanf("%li", &e);
	printf("Enter a unsigned long integer:");
	scanf("%lu", &f);
	printf("Enter a float :");
	scanf("%f", &g);
	printf("Enter a double:");
	scanf("%lf", &h);
	printf("Enger a long double:");
	scanf("%Lf", &i);
	

	printf("Enter a signed char:");
	scanf(" %c", &j);

	

	//scanf("%d%i%hi%hu%li%lu%f%lf%Lf%c%c", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
	printf(" the entered numbers are : %d %i %hi %hu %li %lu %f %lf %Lf %c \n", a,b,c,d,e,f,g,h,i,j);
	return 0;
}