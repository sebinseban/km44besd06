//Date: 02/03/2022
//Lab Experiment 7: 
//Whenever SW_ENT Press turn ON BUZZER up to 250msec and Turn OFF BUZZER

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
		
		GPIOB_MODER &= 0xFCFFFFFF;                      //clear bits 25,24
		GPIOB_MODER |= 0x01000000;											//load "01" onto bits 25,24 i.e pin 12 as output device
		
		GPIOB_ODR |= (0x1 << 12);                       //keep the BUZZER off initially
	
		
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
		
		while(1)
	{
		if(!(GPIOC_IDR & (0X1<<10)))		//conditon is true enter the switch is ON  10th bit
		{
			GPIOB_ODR |=(0x1<<12); 	//set 12 bit position is ON now BUZZER ON because of -ve BUZZER
		}
		delay(100);                 //pass a 100ms delay
		GPIOB_ODR &=(~(0x1<<12));
		
	}
}