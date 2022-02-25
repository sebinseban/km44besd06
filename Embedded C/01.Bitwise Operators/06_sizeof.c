//sebin sebastian
//24/02/2022
//WAP to implement the sizeof operation using bitwise operator.

int main()
{
		
	int x=0xF;
	int c=0,size;
	while(x!=0)
	{
		c++;
		x=x << 1;
	}
	size=c/8;
	

	
	return 0;
}
