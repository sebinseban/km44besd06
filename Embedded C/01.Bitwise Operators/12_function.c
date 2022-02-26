//sebin sebastian
//24/02/2022
//Write a functionsetbits (x,p,n,y)that returns x with then bits that begin at
//position p set to the rightmost n bits of y, leaving the other bits unchanged.

int main()
{
	int x=170,y=167,n=3,i,p=6,a=0,k;
	k=n;
	for(i=0;i<n;i++)
	{
		int result=y&(0x1<<i);
		a=a|result;
	}
	for(i=0;i<p-k;k++)
	{
		x=x&(~(0x1<<k));
	}
	a=a<<n;
	x=x|a;
	
	
	return 0;
}