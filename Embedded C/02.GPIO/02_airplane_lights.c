//date : 01/03/2022
//Lab Experiment 2:
//Airplane wing Lights blinking Delays:
//USER LED1 (GREEN): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically.
//USER LED2 (RED): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.

#define RCC_AHB1ENR  (*(int *)0x40023830)
#define GPIOB_MODER  (*(int *)0x40020400)
#define GPIOB_ODR    (*(int *)0x40020414)

void delay(int msecs)                      
{
		int count;
		count = (msecs * 120 * 84) / 4;                          //milliseconds		
		while (count)
		{
			count--;
		}
}

void initializeAll(void)
{
	RCC_AHB1ENR |= (0x1 << 1);             //port b is on now
	while ( !(RCC_AHB1ENR & (0x1 << 1)))
	{
		;
	}
		
	GPIOB_MODER &= 0xC3FFFFFF;							//clearing both pin 13 and pin 14, i.e bits 29,28,27,26
	GPIOB_MODER |= 0x14000000; 							// put "01" in both the pins
	
	GPIOB_ODR |=  (0x1 << 13);							//initially keep the led off
	GPIOB_ODR |=  (0x1 << 14);							//initially keep the led off , use debugger to understand in depth
}

void greenBlink(void)
{
		GPIOB_ODR &= ~(0x1 <<14);							//turn on the green led
		delay(50);															//50ms delay, led will blink for 50 ms
		GPIOB_ODR |= (0x1 << 14);							//turn off the green led
		delay(50);															//50ms delay, led will not blink for 50 ms
		GPIOB_ODR &= ~(0x1 <<14);							//turn on the green led
		delay(50);															//50 ms delay, led will blink for 50 ms
		GPIOB_ODR |= (0x1 << 14);							//turn off the green led				
		delay(150);	                          //150ms delay, led will not blink for 150 ms
}

void redBlink(void)
{
		GPIOB_ODR &= ~( 0x1 << 13);           //turn on the red led
		delay(50);														//delay of 50ms
		GPIOB_ODR |= (0x1 << 13);							//turn off the red led
		delay(250);														//delay of 250ms	
		GPIOB_ODR &= ~( 0x1 << 13);						//turn on the red led
		delay(50);														//delay of 50ms
		GPIOB_ODR |= (0x1 << 13);							//turn off the red led
		delay(500);														//delay of 500ms	
		
}

int main()
{
		initializeAll();
		while (1)
		{
			greenBlink();
			redBlink();
		}	
}
