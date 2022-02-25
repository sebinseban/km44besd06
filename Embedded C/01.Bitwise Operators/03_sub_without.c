//sebin sebastian
//24/02/2022
//WAP to implement subtraction functionality without using SUB ('-') Operator

int main()
{
	int x = 10;
	int y = 5;
	while (y != 0) 
    { 
        int borrow = (~x) & y; 
        x = x ^ y; 
        y = borrow << 1; 
    }

	return 0;
	
}
