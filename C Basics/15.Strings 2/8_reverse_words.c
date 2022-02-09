//sebin sebastian
//07/02/2022
//Write a program to reverse the order of words in a string. 
//void wordReverse (char str[]);

#include<stdio.h>
void wordreverse(char a[]);
int main()
{
	char a[100];
	printf("String 1:");
	scanf("%[^\n]s",a);
	wordreverse(a);
	return 0;
}
void wordreverse(char a[])
{
	int i=0,j=0,t,m,n;
	for(i=0;a[i]!='\0';i++)
	{
		j++;
	}
	j--;
	for(i=0;i<j;i++,j--)
	{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
	}m=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i+1]=='\0')
			n=i;
		else if(a[i]!=' ')
			continue;
		else 
			n=i-1;
		for(;m<n;m++,n--)
		{
			t=a[m];
			a[m]=a[n];
			a[n]=t;
		}
		m=i+1;
	}
printf("%s\n",a);

}