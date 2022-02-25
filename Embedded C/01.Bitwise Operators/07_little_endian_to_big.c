//sebin sebastian
//24/02/2022
//WAP to convert little endian integer to Big endian integer.

int main()
{
	int a=0x12345678;
	
	a=(a>>24|(a>>8&0x0000FF00)|a<<24|(a<<8&0x00FF0000));
	

	return 0;
	
}