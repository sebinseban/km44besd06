//Date: 02/03/2022
//Lab Experiment 6:
//Read SW_ENT, if switch is press RED LED is ON otherwise RED LED is OFF. Note that RED LED
//should remain ON for the duration switch is kept pressed i.e. RED LED should turn OFF when switch is released.


#define RCC_AHB1ENR (*(int *)0x40023830)
#define GPIOB_MODER (*(int *)0x40020400)
#define GPIOB_ODR 	(*(int *)0x40020414)
#define GPIOC_MODER (*(int *)0x40020800)
#define GPIOC_PUPDR (*(int *)0x4002080C)
#define GPIOC_IDR   (*(int *)0x40020810)



void delay(int msecs)
{
		int count;
		count = (msecs * 120 * 84)/ 4;
		while (count)
		{
			count--;
		}
}

void initialize(void)
{
	
		//initialize all port b peripherals first, then only go for other port. this will be a better approach
		RCC_AHB1ENR |= (0x1 << 1);     									//turn port b clock on
		while (! (RCC_AHB1ENR & (0x1 << 1)))            //block to verify if port b clock is on or not
		{
			;
		}
		
		GPIOB_MODER &= 0xF3FFFFFF;                      //clear bits 27,26
		GPIOB_MODER |= 0x04000000;											//load "01" onto bits 27,26 i.e pin 13 as output device
		
		GPIOB_ODR |= (0x1 << 13);                       //keep the red led off initially
	
		
		RCC_AHB1ENR |= (0x1 << 2);											//turn port c clock on
		while (! (RCC_AHB1ENR & (0x1 << 2)))				    //block to verify if port c clock is on or not
		{
			;
		}
		
		GPIOC_PUPDR &= 0xFFCFFFFF;                      //clear the 21,20 bits
		GPIOC_PUPDR |= 0x00100000;											//load "01" into 21,20 bits to make the pin as pullup			
}



int main(void)
{
	
		initialize();
		//Whenever ENTER SWITCH is Press toggle RED LED.
		
		while (1)
		{
			 if ( ! (GPIOC_IDR & (0x1 << 10)))            //in an infinite loop, we are checking if someone is pressing PC10
			 {
						GPIOB_ODR &= ~(0x1 << 13);               //keep the led on
						
			 }
				
			 
			 
				 
				 		GPIOB_ODR |= (0x1 << 13);               //toggle led on and off each time the user presses enter key
			 
			 
				 
				
		}	
}