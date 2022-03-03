//Date: 02/03/2022
//Lab Experiment 4: 
//Use “SW_ENT” and declare “counter” global variable. Your program should increment counter
//by one, every time switch is pressed. Note how the value of counter changes on each “ENTER SWITCH” press. Use
//debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?

#define RCC_AHB1ENR (*(int *)0x40023830)
#define GPIOC_MODER (*(int *)0x40020800)
#define GPIOC_PUPDR (*(int *)0x4002080c)
#define GPIOC_IDR   (*(int *)0x40020810)

int counter;

void delay (int msecs)
{
		int count = (msecs * 120 * 84)/4;
		while (count)
		{
			count--;
		}	
}
void initialize (void)
{
		RCC_AHB1ENR |= (0x1 << 2);                     //turn on port c clock
		while ( !(RCC_AHB1ENR & (0x1 << 2)))				   //block to verify if port c block is on or not
		{
			;
		}
		//no need to set mode for switch, by default it is configured as input
		GPIOC_PUPDR  &= 0xFFCFFFFF;                    //clear the bits first
		GPIOC_PUPDR  |= 0x00100000;                    //put "01" in the cleared bits. this will configure pin 10 as pullup
	
	
	
}


int main(void)
{
	initialize();
	
	while (1)
	{
		if ( !(GPIOC_IDR & (0x1 << 10)))           //check if someone is pressing the key
		{
			counter++;																//if key pressed, increment the count
		}
		delay(180);                   //a delay of 180ms seems more accurate for reading key pressed
		
	}
	
}