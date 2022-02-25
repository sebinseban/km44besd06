//sebin sebastian
//24/02/2022
//WAP to count the bits set 
//(bit value 1) in an integer? Find out and compare different possibilities?
//more than 6 possibilities, but majority of the algorithms require recursion
//brian kernighan algorithms seems like a fine choicee for counting set bits
#define LENGTH 32

int main()
{
    unsigned int x = 255;
	int count = 0;
	
	//unsigned int range 0 to 4294967295
	/*solution 1 : loop through all the bits in the integer and check if each bit is one
	Time Complexity: T(logn) (Theta of logn)
	Auxiliary Space: O(1) 
	
    while (x)
    {
        count = count + (x & 1);
        x >>= 1;
    } 
    
	*/
	
	/*Brian Kernighan’s Algorithm
	Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit. 
	for example : 
	10 in binary is 00001010 
	9 in binary is 00001001 
	8 in binary is 00001000 
	7 in binary is 00000111 
	So if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit. 
	If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 
	The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer. 
	Time Complexity: O(logn)*/
    while (x)
    {
        //x = x & (x - 1);
        x &= (x-1);
        count++;
    }
	
    return 0;
}