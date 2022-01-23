//sebin sebastian
//23/01/2022
//Write a function that takes principle, rate of interest and time in months as input arguments, 
//and returns the total amount to be repayed, after calculation of simple interest.

#include <stdio.h>

float simpleInterest ( float p, float rate, float years)
{   
    float simple_interest = 0;
    simple_interest = (p * rate * years) / 100;
    return simple_interest;

}
int main()
{
    float principle,rate,years;
    int months;
    printf("Enter principle,rate and months: ");
    scanf("%f %f %d",&principle,&rate,&months);
    years = months/12;

    printf("Amount to be repayed for a year: %0.3f\n",simpleInterest(principle,rate,years) * months);


}