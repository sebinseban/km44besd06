//sebin sebastian
//24/02/2022
//WAP to implement subtraction functionality without using SUB ('-') Operator

int main()
{
<<<<<<< HEAD
		int x = 10;
		int y = 5;
		while (y != 0) 
    { 
        int borrow = (~x) & y; 
        x = x ^ y; 
        y = borrow << 1; 
    }
	
=======
    int borrow;
    int x = 10;
    int y = 5;
	while (y != 0) 
    { 
        borrow = (~x) & y; 
        x = x ^ y; 
        y = borrow << 1; 
    }

>>>>>>> 73d253247d97ff608a475426b7e7f2a2f7c10f53
	return 0;
	
}
