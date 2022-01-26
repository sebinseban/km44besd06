//sebin sebastian
//26/01/2022
//print all the prime numbers between a given range

#include<stdio.h>
int main()
{
	int n,m,a,count=0,c;
    printf("Enter start and stop limit:");
	scanf("%d%d",&n,&m);

	for( ;n<=m;n++)
	{
		count=0;
		for(a=1;a<=n;a++)
		{
			if(n%a==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",n);
		}
		
	}
    printf("\n");
}