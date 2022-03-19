#define GPIO_PORTA_MODE       (*(volatile int *)0x40020000)     //MODE
#define GPIO_PORTA_OTYPER     (*(volatile int *)0x40020004)  	
#define GPIO_PORTA_OSPEEDR    (*(volatile int *)0x40020008)  	  	
#define GPIO_PORTA_PUPDR      (*(volatile int *)0x4002000C)
#define GPIO_PORTA_IDR        (*(volatile int *)0x40020010)
#define GPIO_PORTA_ODR        (*(volatile int *)0x40020014)     //out put data register
#define GPIO_PORTA_BSRR       (*(volatile int *)0x40020018)   
#define GPIO_PORTA_LCKR       (*(volatile int *)0x4002001C)   	
#define GPIO_PORTA_AFCTL1     (*(volatile int *)0x40020020) 
#define GPIO_PORTA_AFCTL2     (*(volatile int *)0x40020024)

#define SYSCFG_EXTICR1   (*(volatile int *)0x40013808) 
#define SYSCFG_EXTICR2   (*(volatile int *)0x4001380C) 
#define SYSCFG_EXTICR3   (*(volatile int *)0x40013810)  
#define SYSCFG_EXTICR4   (*(volatile int *)0x40013814) 

#define   UART1_SR                    (*(volatile int *)0x40011000)   
#define   UART1_DR                    (*(volatile int *)0x40011004)   
#define   UART1_BBR                   (*(volatile int *)0x40011008)   
#define   UART1_CR1                   (*(volatile int *)0x4001100C)   
#define   UART1_CR2                   (*(volatile int *)0x40011010)   
#define   UART1_CR3                   (*(volatile int *)0x40011014)            
#define   UART1_GTPR                  (*(volatile int *)0x40011018) 

#define RCC_GPIO_SYSTEM_CLK    (*(volatile int *)0x40023830)     //clock
#define RCC_PERIPHERAL_CLK    (*(volatile int *)0x40023844)  // (ADC1 (8 Bit)) (SPI1 12 Bit)  (SPI4 13 Bit)  

#define NVIC_ISER0       (*(volatile int *)0xE000E100)      //Interrupt Range is 31 to 0
#define NVIC_ISER1       (*(volatile int *)0xE000E104)      //Interrupt Range is 63 to 32
#define NVIC_ISER2       (*(volatile int *)0xE000E108)      //Interrupt Range is upto end to 64
	
void KM_SysTick_Init(void);
void KM_delay_ms(unsigned long );

char temp;
void UART1_Init(void)
{
	RCC_GPIO_SYSTEM_CLK |=0x01;  // Enable Port 'A' Clock
	while(!(RCC_GPIO_SYSTEM_CLK&0x01)); // wait until Port 'c' active
	GPIO_PORTA_MODE   |=0X00280000;      //alternate function enable PA9/PA10
	GPIO_PORTA_AFCTL2  |=0x00000770;      //to set PA9 and PA10 as UART1 func - Mux/Pad configuration
	 RCC_PERIPHERAL_CLK|=(0x01<<4);        //Enable UART1 Clock 
	while((RCC_PERIPHERAL_CLK&(0x01<<4))==0)   
	{
		;
  } 

}

void UART1_Conf(void)
{
	UART1_BBR=0x683;                          //16000000/(16*9600)=104.1875==>104+0.18==>68(integral part)
  UART1_CR1|=0x202C;                        // UART Enable(13bit) and RX(2bit) and Tx(3bit) also Enable 
}

void KM_UART1_Out_Char(unsigned char Data)
{
	while((UART1_SR&0x80)==0) // Check Tx bit - Wait until TDR Empty
	{
		;
	}                           	//0: Data is not transferred to the shift register
	UART1_DR=Data;								//1: Data is transferred to the shift register)
}


char KM_UART1_In_Char(void) // Blocking call
{
		while((UART1_SR&0x20)==0) // Check RXNE bit - Wait until RDR FULL
		{ 
			;
		}		
		return (UART1_DR&0xFF);	
}
void delay(int a)
{
	int i=125000;
	i*=a;
	while(i>0)
	{
		i--;
	}
}
/*void KM_SYSCONFIG_Init(void)
{
		RCC_PERIPHERAL_CLK  |= 0x01<<14; // Enable_clock_for_system_configuration(for externel Interupts)
		while(!(RCC_PERIPHERAL_CLK & 0x01<<14)){;}	 // Wait_Until_Clock_Will_Set	
}*/
void KM_Interrupt_Init(void)
{
	 //GPIO_PORTC_PUPDR |=  (0x01 << 20);   // Enable Pull-Up for PC8, PC9 and  PC10 ( SW1,SW2,ENT )
	 //SYSCFG_EXTICR3   |= (0x200);     // Configurte PC8,PC9,PC10 Externel Interrupts
	 //EXTI_15_10_FTSR    |= (0x01 << 8) | (0x01 << 9)| (0x01 << 10); // Set Falling Edge Trigger for PC8, PC9 and  PC10 ( SW1,SW2,ENT )
   //EXTI_15_10_IMR     |= (0x01 << 8) | (0x01 << 9)| (0x01 << 10); // Enable Interrupt Mask for PC8, PC9 and  PC10 ( SW1,SW2,ENT )	
	 //NVIC_ISER0       |= (0x01 << 23); // Set 23rd Line In NVIC for PC8 and PC9 Interrupts in ISER0
	 NVIC_ISER1       |= (0x01 << 5); // Set 8th Line In NVIC for PC10 Interrupt in ISER1
}
int main(void)
{
	KM_Interrupt_Init();
	UART1_Init();
	UART1_Conf();
 while(1)
	{	
		;
		
	}
	
	return 0;
	
	
}
void USART1_IRQHandler(void)
{
	
	temp=UART1_DR;
			
}