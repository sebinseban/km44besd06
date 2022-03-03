//01/03/2022
//Lab Experiment 1: 
//Toggle RED LED ON time is 50ms and RED LED OFF time is 1300ms

#define RCC_AHB1ENR (*(int *)0x40023830)                 
#define GPIOB_MODER (*(int *)0x40020400)										
#define GPIOB_ODR   (*(int *)0x40020414)
	

//A completely serviceable, functional, and reasonably accurate delay feature can be implemented in a bare-metal environment using nothing more 
//than a humble while() loop. This exploits the discrete nature of processor cycles in combination with knowing the current system clock. 
//Essentially this means converting the desired delay to processor time and counting down (or up) to that interval.


void delay(int msecs)                      
{
		int count;
		count = (msecs * 120 * 84) / 4;                          //milliseconds		
		while (count)
		{
			count--;
		}

}

void redInitialize(void)
{
	RCC_AHB1ENR |=  (0x1 << 1);
	while ( !(RCC_AHB1ENR & (0x1 << 1)))
	{
		;
	}
	
	GPIOB_MODER &= 0xF3FFFFFF;            //clearing the bits inorder to store "01" into bits 27 and 26
	
	GPIOB_MODER |= 0x04000000;						//setting the pin as output mode
	
	GPIOB_ODR |= (0x1 << 13);             //initially keeping the bit 13 set, so that led is off at this stage (negative logic led)
}

int main()
{
	
		redInitialize();
		
		//dont use xor operator, use the normal method, keep it on, then delay, keep it off, then delay
		//Toggle RED LED ON time is 50ms and RED LED OFF time is 1300ms
		while (1)
		{
					
					GPIOB_ODR &= ~( 0x1 << 13);          //turn on red led
					delay(50);													 //keep blinking for 50 milliseconds
					GPIOB_ODR |= (0x1 << 13);						 //turn off the red led
					delay(1300);												 //keep led OFF for 1300 milliseconds
			
		}	
		
		
	
}
