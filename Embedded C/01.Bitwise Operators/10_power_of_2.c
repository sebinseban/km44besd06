//sebin sebastian
//24/02/2022
//WAP to check whether a number is power of 2 or not?

int main()
{
	int x=32,value;
	if((x&(x-1))==0)
	{
		value=1; //if 1, not power of 2
	}
	else
	{
		value=0; //if 0,  power of 2
	}
	
	return 0;
}