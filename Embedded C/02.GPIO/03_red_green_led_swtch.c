//DATE: 02/03/2022
//Lab Experiment 3: 
//Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.
//Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses
//program stops at any one of the breakpoint.

#define RCC_AHB1ENR (*(int *)0x40023830)
#define GPIOB_MODER (*(int *)0x40020400)
#define GPIOC_MODER (*(int *)0x40020800)
#define GPIOB_ODR   (*(int *)0x40020414)
#define GPIOC_PUPDR (*(int *)0x4002080C)
#define GPIOC_IDR   (*(int *)0x40020810)
	
void delay (int msecs)
{
		int count;
		count = (msecs * 120 * 84) / 4;
		while (count)
		{
				count--;
		}	
}


void initializeAll(void)
{
		RCC_AHB1ENR |= (0x1 << 1);     									//turn port b clock on
		while (! (RCC_AHB1ENR & (0x1 << 1)))            //block to verify if port b clock is on or not
		{
			;
		}
		
		RCC_AHB1ENR |= (0X1 << 2);		 									//turn port c clock on
		while (! (RCC_AHB1ENR & (0x1 << 2)))						//block to verify if port b clock is on or not
		{
			;
		}
		//configuring LED pins 
		GPIOB_MODER &= 0xC3FFFFFF;											//putting all zeroes in bits 29,28,27,26. 
		GPIOB_MODER |= 0x14000000;											//putting values "01" in  29,28,27,26 bits to configure 14th and 13th of GPIO PORT B pin as output pins
		
		//configuring switch pins
		//NO NEED OF THIS BLOCK, since all gpio pins are reset (as input) by default
		//GPIOC_MODER &=  0xFFF0FFFF;
		
		
		
		GPIOB_ODR |= (0x1 << 13);                       //initially at startup, keep the red led off  i.e 13th bit of od register
		GPIOB_ODR |= (0x1 << 14);												//initially at startup, keep the green led off i.e 14th bit of od register
		
		GPIOC_PUPDR &= 0xFFF0FFFF;											// so first clear the bits and put 0000 in 19,18,17,16
		GPIOC_PUPDR |= 0x00050000;                      //CONFIGURE the GPIO PORT C, PIN 8 AND 9 as pullup 
}


int main(void)
{
		initializeAll();
		
		while (1)
		{
				if (!(GPIOC_IDR & (0x1 << 8)))             //in an infinite loop, we are checking if someone is pressing switch 8 in port C
				{
						GPIOB_ODR &= ~(0x1 << 13);						 // if that switch is pressed, then turn the red led on by controlling the odr register
				}
				delay(100);                                //humans need a minimum  of 100ms delay to register a switch click
				
				if (!(GPIOC_IDR & (0x1 << 9)))						 //in an infinite loop, we are checking if someone is pressing switch 9 in port c
				{
						GPIOB_ODR &= ~(0X1 << 14);						 //if that switch is pressed, then turn the green led on by controlling the odr register	
				}
				delay(100);																 //humans need a minimum  of 100ms delay to register a switch click			
		}	
}