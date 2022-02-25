//sebin sebastian
//24/02/2022
//WAP to implement XOR functionality without using XOR (^) operator.

int main()
{
	int x=8,y=4;
	x=((~x)&y)|(x&(~y));

    return 0;
}