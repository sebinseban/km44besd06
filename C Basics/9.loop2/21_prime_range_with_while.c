//sebin sebastian
//26/01/2022
//prime range program counting using while statement

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    n=n/10;
    count++;
    while(n>0)
    {
        n=(n/10);
        count++;
    }
    printf("%d",count);

    return 0;
}