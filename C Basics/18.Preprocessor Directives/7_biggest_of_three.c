//sebin sebastian
//14/02/2022
//Write a macro to print the biggest of three values.
//Try to call it and print the result for different data types, integer, float, double and character.

#include <stdio.h>

//give the %d also as an arguement inside macro name <mn>
//very important to learn to pass in format specifier alsos as arguement
//this is only possible with stringizing operator
#define max_of_three(x,y,z,arg) printf("Biggest:" #arg "\n",x>y&&x>z?x:y>z?y:z)

int main()
{
	int x = 5, y = 6, z = 7;
	float a = 1.2, b = 5.6, c = 7.99;
	double p = 12.567, q = 234.345, r = 120.999;
	max_of_three(x,y,z,%d);    //passing format specifier also as argument
	max_of_three(a,b,c,%f);
	max_of_three(p,q,r,%lf);

	/* copied from preprocessor output file
	printf("Biggest:" "%d" "\n",x>y&&x>z?x:y>z?y:z);
 	printf("Biggest:" "%f" "\n",a>b&&a>c?a:b>c?b:c);
 	printf("Biggest:" "%lf" "\n",p>q&&p>r?p:q>r?q:r); */


}