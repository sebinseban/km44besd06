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
	

#define   UART1_SR                    (*(volatile int *)0x40011000)   
#define   UART1_DR                    (*(volatile int *)0x40011004)   
#define   UART1_BBR                   (*(volatile int *)0x40011008)   
#define   UART1_CR1                   (*(volatile int *)0x4001100C)   
#define   UART1_CR2                   (*(volatile int *)0x40011010)   
#define   UART1_CR3                   (*(volatile int *)0x40011014)            
#define   UART1_GTPR                  (*(volatile int *)0x40011018) 

#define RCC_GPIO_SYSTEM_CLK    (*(volatile int *)0x40023830)     //clock
#define RCC_PERIPHERAL_CLK    (*(volatile int *)0x40023844)  // (ADC1 (8 Bit)) (SPI1 12 Bit)  (SPI4 13 Bit)  


void KM_SysTick_Init(void);
void KM_delay_ms(unsigned long );

char temp;
void UART1_Init(void)
{
	RCC_GPIO_SYSTEM_CLK |=0x01;  // Enable Port 'A' Clock
	while(!(RCC_GPIO_SYSTEM_CLK&0x01)); // wait until Port 'c' active
	GPIO_PORTA_MODE   |=0X00280000;      //alternate function enable PA9/PA10
	GPIO_PORTA_AFCTL2  |=0x00000770;      //to set PA9 and PA10 as UART1 func - Mux/Pad configuration
	RCC_PERIPHERAL_CLK|=(0x01<<4);         //Enable UART1 Clock 
	while((RCC_PERIPHERAL_CLK&(0x01<<4))==0)   
	{
		;
  } 

}

void UART1_Conf(void)
{
	UART1_BBR=0x683;                          //16000000/(16*9600)=104.1875==>104+0.18==>68(integral part)
  UART1_CR1|=0x200C;                        // UART Enable(13bit) and RX(2bit) and Tx(3bit) also Enable 
}

void KM_UART1_Out_Char(unsigned char Data)
{
	while((UART1_SR&0x80)==0) // Check Tx bit - Wait until TDR Empty
	{
		;
	}                           	//0: Data is not transferred to the shift register
	UART1_DR=Data;								//1: Data is transferred to the shift register)
}


char KM_UART1_In_Char_non_blocking(void) // non-Blocking call
{
		if((UART1_SR&0x20)==0) // Check RXNE bit - Wait until RDR FULL
		{ 
			return 0;
		}		
		return (UART1_DR&0xFF);	
}


int main(void)
{
	//temp2 = 'A';
	UART1_Init();
	UART1_Conf();
  //KM_SysTick_Init();
	temp='s';
	while(1)
	{	
		
		
		KM_UART1_Out_Char(temp);
		temp = KM_UART1_In_Char_non_blocking();
	
	
	}
	return 0;
}