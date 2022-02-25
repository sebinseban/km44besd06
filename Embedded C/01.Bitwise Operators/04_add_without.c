//sebin sebastian
//24/02/2022
//WAP to implement addition functionality without using ADD ('+') Operator.






int main()
{
		int x = 10;
		int y = 5;
		while (y != 0) 
    { 
        int carry = x & y; 
        x = x ^ y;  
        y = carry << 1; 
    }
	
	return 0;
	
}
