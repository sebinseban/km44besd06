//sebin sebastian
//24/02/2022
//WAP to print binary

#define SIZE 32

int main()
{
	int binary[SIZE] = {0};

	int decimal =  8 , i; 	// is the decimal number to convert into binary 
	
	/* the decimal is converted to binary, but you have to reverse the array to use it. Just like how we convert decimal to binary 
	in book, reverse read the output 
	so start storing from the last element, all the beginning elements will be zero*/
	
	for(i = SIZE - 1 ; i > -1; i--)
	{
		binary[i] = decimal%2;
		decimal = decimal/2;
	}
	/* reversing the array binary[] by swapping the first and last elements
	or directly try to store into the arrays last index onwards
	for (i = 0, j = SIZE - 1  ; i < j ; i++,j--)
	{
		int temp = binary[i];
		binary[i] = binary[j];
		binary[j] = temp;
	}
	*/
	return 0;
}