//Write a Pseudo code and Embedded C program to USAR1 Configuration using the below
//conditions.
//a. System Clock Initialization to 16MHZ
//b. 9600 8N1 (1+8+0+1=10 bits)
//Assign a Hardware breakpoint in UART1_ISR and run program. Program execution time sends
//‘A’ character from host system using Tera term application. Verify results in ISR.



#define ms 16000
#define GPIO_PORTA_MODE       (*(volatile int *)0x40020000)     //port A MODE
#define GPIO_PORTA_ODR        (*(volatile int *)0x40020014)     //out put data register 	 
#define GPIO_PORTA_AFCTL1     (*(volatile int *)0x40020020)
#define GPIOC_IDR    (*(volatile int *)0x40020810)		//port c input data regster physical address
#define GPIOC_PUPDR  (*(volatile int *)0x4002080C)		//port c pull up data register
	
#define RCC_AHB1ENR  (*(int *)0x40023830)		//CLK
#define GPIOB_MODER   (*(int *)0x40020400)	//PORT B MODE
#define GPIOB_ODR     (*(int *)0x40020414)	//PORT B OUTPUT DATA REGISTER
	

#define   UART2_SR        (*(volatile int *)0x40004400) 	//USART2 STATUS REGISTER  
#define   UART2_DR        (*(volatile int *)0x40004404)   //USART2  DATA REGISTER
#define   UART2_BBR       (*(volatile int *)0x40004408)  	//USART2 BUARD RATE 
#define   UART2_CR1       (*(volatile int *)0x4000440C)   //USART2 CONTROL REGISTER 1
#define RCC_SYSTEM_clk   (*(volatile int *)0x40023830)     //clock
#define GPIO_PORTB_ODR    (*(volatile int *)0x40020414)     //out put data register
#define GPIO_PORTB_MODE   (*(volatile int *)0x40020400)     //MODE
	
#define STK_CTRL          (*(volatile int *)0xE000E010) 
#define STK_LOAD          (*(volatile int *)0xE000E014)
#define STK_VAL           (*(volatile int *)0xE000E018)


#define RCC_GPIO_SYSTEM_CLK    (*(volatile int *)0x40023830)     //clock
#define RCC_APB1ENR_CLK    (*(volatile int *)0x40023840)  // (ADC1 (8 Bit)) (SPI1 12 Bit)  (SPI4 13 Bit)  

void GPIO_INIT(void)
{
	RCC_AHB1ENR|=(0x1<<1);	//set 1st bit 1 to enable the clock
	while(!(RCC_AHB1ENR & (0x1<<1)))	//wait untill the 1st bit value become set
	{
	;
	}
	RCC_AHB1ENR |=(0x1<<2);	//set 1st bit 2 to enable the clock
	while(!(RCC_AHB1ENR & (0x1<<2)))	//wait untill the 2nd bit value become set
	{
	;
	}

	GPIOB_MODER &= (0xF3FFFFFF);	//clear 27th&26th bits
	GPIOB_MODER |= (0X04000000);	//load "01" value into 26th&27th position
	GPIOB_MODER &= (0xCFFFFFFF);	//clear 29th & 28th bits
	GPIOB_MODER |= (0X10000000);	//load "01" value into 29th&28th position
	GPIOC_PUPDR &= (0xFFF0FFFF);	//clear 17st&16th&19th&18th bits    
	GPIOC_PUPDR |= (0X00050000);	//"01" pull up enable
	GPIOB_ODR |= (0x01<<13);
	GPIOB_ODR |= (0x01<<14);
}

void Sys_Tick_Init(void)
{
 	STK_CTRL|=0x05;// Set 0,2 bit- Enable System clock (16Mhz) and Enable system tick timer
	STK_VAL=0x123;// Garbage value to clear load register
	//  STK_LOAD=500000;
	//	STK_LOAD=160000; //  0.01s (10msec) delay
	STK_LOAD=1600000; // (0x186A00) 0.1s (100msec) delay
	//	STK_LOAD=16000000; //(0xF42400) 1sec delay
	//	STK_LOAD=16777215; //(0xFFFFFF) 1sec delay (Max Delay)
}
void systickMsDelay(unsigned long delay)
{	
	STK_LOAD = (ms * delay ) - 1;
	STK_VAL = 0;
	while ( (STK_CTRL & 0x00010000) == 0)
	{
	}
}	
void KM_SysTick_Init(void);
void KM_delay_ms(unsigned long );

char temp;
void UART2_Init(void)
{
	RCC_GPIO_SYSTEM_CLK |=0x01;  // Enable Port 'A' Clock
	while(!(RCC_GPIO_SYSTEM_CLK&0x01)); // wait until Port 'A' active
	GPIO_PORTA_MODE   |=0X000000A0;      //alternate function enable PA2/PA3
	GPIO_PORTA_AFCTL1  |=0x00007700;      //to set PA2 and PA3 as UART2 func - Mux/Pad configuration
	RCC_APB1ENR_CLK |=(0x01<<17);         //Enable UART2 Clock 
	while((RCC_APB1ENR_CLK &(0x01<<17))==0)   
	{
		;
  } 

}


void UART2_Conf(void)
{
	UART2_BBR=0x683;                          //16000000/(16*9600)=104.1875==>104+0.18==>68(integral part)
  UART2_CR1|=0x200C;                        // UART Enable(13bit) and RX(2bit) and Tx(3bit) also Enable 
}

void KM_UART2_Out_Char(unsigned char Data)	//NON-BLOCKING 
{
	if((UART2_SR&0x80)==0) // Check Tx bit - Wait until TDR Empty
	{
		;
	}                           	//0: Data is not transferred to the shift register
	UART2_DR=Data;  //1: Data is transferred to the shift register)
	systickMsDelay(150);
}


char KM_UART2_In_Char(void) // Blocking call
{
		while((UART2_SR&0x20)==1) // Check RXNE bit - Wait until RDR FULL
		{ 
			;
		}			
		return (UART2_DR&0xFF);	
}



char temp;
int main(void)
{
	
	UART2_Init();
	UART2_Conf();
	GPIO_INIT();
	Sys_Tick_Init();
	
	while(1)
	{
		if(!(GPIOC_IDR & (0X1<<8)))
		{
			KM_UART2_Out_Char('R');            //NON BLOCKCING
		}
		if(!(GPIOC_IDR & (0X1<<9)))
		{
			KM_UART2_Out_Char('G');
		}
		temp=KM_UART2_In_Char();          //BLOCKING
		
		if(temp=='R')
		{
			GPIOB_ODR &= ~(0x01<<13);
		}
		temp=KM_UART2_In_Char();
		if(temp=='G')
		{
			GPIOB_ODR &= ~(0x01<<14);
		}
		
	}

}
