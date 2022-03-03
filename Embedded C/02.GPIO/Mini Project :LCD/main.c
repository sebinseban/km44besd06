


#define RCC_AHB1ENR (*(int *)0x40023830)
#define GPIOB_MODER (*(int *)0x40020400)										
#define GPIOB_ODR   (*(int *)0x40020414)
	

//beatiful logic for creating an accurate delay
void delay(int mills)
{
	int count;
	count = (mills * 120 * 84)/4;
	while (count)
	{
		count--;
	}	
}
void initializeGPIO(void)
{
		//enable clock for block b
		RCC_AHB1ENR |= (0x1 << 1);
		while ( !(RCC_AHB1ENR & (0x1 << 1)))
		{
			;
		}		
		// set the pins 0,1,2,3,4,5,8 as output mode
		GPIOB_MODER &= 0xFFFCF000;        //clearing pins 0,1,2,3,4,5,8
		GPIOB_MODER |= 0X00010555;        //making pins pb0,pb1,pb2,pb3,pb4,pb5,pb8 as output pins
}

void enable(void)
{
	//first make enable pin high, provide delay, then make the enable pin low
	//enable pin is the pin 8 ,
	GPIOB_ODR |= (0x1 << 8);
	delay(10);
	GPIOB_ODR &= ~(0x01 << 8);     //turn the bit on first
	
	
	
}

void write_high_nibble( unsigned char value )
{
	//write higher nibble into lcd
	GPIOB_ODR &= ~(0x0F);     														//clear 4 bits
	
	GPIOB_ODR |= (value >> 4) & (0x0F); 									//rightshift to obtain the higher 4 bits i.e nibble			
	enable();																							//use enable to send the date to the lcd device itself	
	
}

void write_low_nibble( unsigned char value )
{	
	GPIOB_ODR &= ~(0x0F);																	
	GPIOB_ODR |= value & (0x0F);
	enable();
}

void KM_LCD_Write_Cmd( unsigned char cmd )
{
		GPIOB_ODR &= ~(0x1 << 4);                //make  the RS pin 0, so that command can be send
		write_high_nibble(cmd);
		write_low_nibble(cmd);
	
	
	
	
}
void KM_LCD_Write_Data( unsigned char data )
{
	
		GPIOB_ODR |= (0x1 << 4);                //make  the RS pin 1, so that command can be send
		write_high_nibble(data);
		write_low_nibble(data);

}

void KM_LCD_Init(void)
{
		delay(20);
		KM_LCD_Write_Cmd(0x33);                 //system command
		delay(1);
		KM_LCD_Write_Cmd(0x32);									//system command
		KM_LCD_Write_Cmd(0x0C);									//display switch command and is used to turn on the display and turn off the cursor
		KM_LCD_Write_Cmd(0x01);									//this command is used to clear the contents of the display
		KM_LCD_Write_Cmd(0x80);									//force cursor to beginning ( 1st line)

	
}





void KM_LCD_Write_Str(char * str)              //basic function for string
{
	int i = 0;
	while ( str[i] != '\0')
	{
		KM_LCD_Write_Data(str[i]);
		i++;
	}
}



int main(void)
{
	char str[100] = "";                     //whatever content you want to print, keep it in this char array 
	initializeGPIO();
	KM_LCD_Init();
	KM_LCD_Write_Str(str);
	KM_LCD_Write_Cmd(0xC0);                 //command to go to the next line in the 16x2 lcd 
	KM_LCD_Write_Str("");										//write on the next line 
	
}
