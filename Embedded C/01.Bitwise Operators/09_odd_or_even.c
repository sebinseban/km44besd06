//sebin sebastian
//24/02/2022
//WAP to check whether a number is ODD or EVEN using bitwise.

int main()
{
	int n=251,value,a;
	a=n&(0x1<<0);
	if(a)
	{
		value=0; //if value = 0, it is even
	}
	else
	{
		value=1; //if value = 1, it is odd
	}
	return 0;
}
