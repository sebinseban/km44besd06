//sebin sebastian
//24/02/2022
//WAP Check if the 20th bit of a 32 bit integer is ON or OFF?

int main()
{
	int b=7777777,p=20;
	int d=(b&(0x1<<p));
	if(d)
	{
		b=1;
	}
	else
	{
		b=0;
	}
	
}