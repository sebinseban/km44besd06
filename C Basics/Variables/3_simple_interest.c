#include <stdio.h>
int main()
{
    int p,n;
    float r,si,m;
    printf("Enter the principle amount, time in months and the rate of interest:");
    scanf("%d%d%f", &p,&n,&r);
    m = n/12.0;
    si = (p*m*r)/100 ;
    printf("The simple interest for %d months is %f \n", n , si);
    return 0;
    
}
