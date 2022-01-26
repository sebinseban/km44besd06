//sebin sebastian
//26/01/2022
//implement the same prime range program with break functionality
#include<stdio.h>
int main()
{
	int n,m,count=0,a;
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
				if(count>2)
				{
					break;
					
				}
			
			}
			
		}
		if(count==2)
		{
			printf("%d ",n);
		}
		
	}
    printf("\n");
}