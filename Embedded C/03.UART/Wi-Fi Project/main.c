#define ms 16000
#define GPIO_PORTC_MODE       (*(volatile int *)0x40020800)     //port C MODE
#define GPIO_PORTC_ODR        (*(volatile int *)0x40020814)     //out put data register 	 
#define GPIO_PORTC_AFCTL1     (*(volatile int *)0x40020820)
	
#define   USART6_SR        (*(volatile int *)0x40011400) 	//USART6 STATUS REGISTER  
#define   USART6_DR        (*(volatile int *)0x40011404)   //USART6  DATA REGISTER
#define   USART6_BBR       (*(volatile int *)0x40011408)  	//USART6 BUARD RATE 
#define   USART6_CR1       (*(volatile int *)0x4001140C)   //USART6 CONTROL REGISTER 1
	
#define RCC_GPIO_SYSTEM_CLK    (*(volatile int *)0x40023830)     //clock
#define RCC_APB2ENR_CLK    (*(volatile int *)0x40023844) 	//clk for USART6
	
#define STK_CTRL          (*(volatile int *)0xE000E010) 
#define STK_LOAD          (*(volatile int *)0xE000E014)
#define STK_VAL           (*(volatile int *)0xE000E018)



void UART6_Init(void)
{
	RCC_GPIO_SYSTEM_CLK |=(0x01<<2);  // Enable Port 'C' Clock
	while(!(RCC_GPIO_SYSTEM_CLK&(0x01<<2))); // wait until Port 'C' active
	GPIO_PORTC_MODE   |=0X0000A000;      //alternate function enable PA6/PA7
	GPIO_PORTC_AFCTL1  |=0x88000000;      //to set PA7 and PA6 as UART6 func - Mux/Pad configuration
	RCC_APB2ENR_CLK |=(0x01<<5);         //Enable UART2 Clock 
	while((RCC_APB2ENR_CLK &(0x01<<5))==0)   
	{
		;
  } 

}

void USART6_Conf(void)
{
	USART6_BBR=0x8B;                        //16000000/(16*115200)=8.680==>8+0.680==>8(integral part)
  USART6_CR1|=0x200C;                        // UART Enable(13bit) and RX(2bit) and Tx(3bit) also Enable 
}

void Sys_Tick_Init(void)
{
 	STK_CTRL|=0x05;// Set 0,2 bit- Enable System clock (16Mhz) and Enable system tick timer
	STK_VAL=0x123;// Garbage value to clear load register
	//  STK_LOAD=500000;
	//	STK_LOAD=160000; //  0.01s (10msec) delay
	//STK_LOAD=1600000; // (0x186A00) 0.1s (100msec) delay
	//	STK_LOAD=16000000; //(0xF42400) 1sec delay
	//	STK_LOAD=16777215; //(0xFFFFFF) 1sec delay (Max Delay)
}
void systickMsDelay(unsigned long delay)
{	
	STK_LOAD = (ms * delay ) - 1;
	STK_VAL = 0;
	while ( (STK_CTRL & 0x00010000) == 0)
	{
		;
	}
}	


char KM_USART6_In_Char(void) // Blocking call
{
		while((USART6_SR&0x20)==0) // Check RXNE bit - Wait until RDR FULL
		{ 
			;
		}		
		return (USART6_DR&0xFF);	
}

void KM_USART6_OutString(char *Data)
{
	
	for(;*Data;Data++)
	{
		while((USART6_SR&0x80)==0) ; // Check Tx bit - Wait until TDR Empty
		USART6_DR=*Data;  
				
	}
	
}
void DELAY(void)
{
	int i=250000;	//100msec
	while(i>0)
		i--;
}



int main()
{
	UART6_Init();
	USART6_Conf();
	Sys_Tick_Init();
		KM_USART6_OutString("AT\r\n");	
		systickMsDelay(1000);
		KM_USART6_OutString("AT+RST\r\n");
		systickMsDelay(1000);
		KM_USART6_OutString("AT+CWMODE=3\r\n");
		systickMsDelay(1000);
		KM_USART6_OutString("AT+CWJAP=\"KernelMasters\",\"9963111084\"\r\n");
		systickMsDelay(1000);
		KM_USART6_OutString("AT+CIFSR\r\n");
		systickMsDelay(1000);
		KM_USART6_OutString("AT+CIPMUX=0\r\n");
		systickMsDelay(1000);
		KM_USART6_OutString("AT+CWLAP\r\n");
		systickMsDelay(1000);
		KM_USART6_OutString("AT+CIPMODE=0\r\n");
		systickMsDelay(1000);
	while(1)
	{
		KM_USART6_OutString("AT+CIPSTATUS\r\n");
		systickMsDelay(400);
		KM_USART6_OutString("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
		systickMsDelay(400);
		KM_USART6_OutString("AT+CIPSEND=38\r\n");
		systickMsDelay(400);
		KM_USART6_OutString("GET /page.php?temp=00&hum=00&dev=00\r\n\r\n");
		systickMsDelay(400);
	}
}