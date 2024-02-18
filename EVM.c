/*
 * EVM.c
 *
 * Created: 11/27/2023 11:42:48 PM
 *  Author: Ahmed Al-Sheikh
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "Button_Driver.h"
#include "LCD_driver.h"

unsigned char counter1 =0;
unsigned char counter2 =0;
unsigned char counter3 =0;
unsigned char counter4 =0;
int main(void)
{
	LCD_init();
	button_init('B',0); /*1*/
	button_init('B',1); /*2*/
	button_init('B',2); /*3*/
	button_init('B',3); /*4*/
	button_init('B',4); /*reset*/
	LCD_sendstring("ElectronicVoting");
	LCD_movecursor(2,1);
	LCD_sendstring("Machine");
	_delay_ms(2000);
	LCD_clearscr();
	LCD_sendstring("A=0");
	LCD_movecursor(2,1);
	LCD_sendstring("B=0");
	LCD_movecursor(1,13);
	LCD_sendstring("C=0");
	LCD_movecursor(2,13);
	LCD_sendstring("D=0"); 
    while(1)
    {
       if (button_read('B',0)==1)
       {
		   counter1++;
		   LCD_movecursor(1,3);
		   if (counter1<10)
		   {
			   LCD_sendchar(counter1+48);
		   }
		   else
		   {
			   LCD_sendchar(counter1/10+48);
			   LCD_sendchar(counter1%10+48);
		   }
	   }			   
       else if (button_read('B',1)==1)
       {
		   counter2++;
		   LCD_movecursor(2,3);
		   if (counter2<10)
		   {
			   LCD_sendchar(counter2+48);
		   }
		   else
		   {
			   LCD_sendchar(counter2/10+48);
			   LCD_sendchar(counter2%10+48);
		   }
       }
       else if (button_read('B',2)==1)
       {
		   counter3++;
		   LCD_movecursor(1,15);
		   if (counter3<10)
		   {
			   LCD_sendchar(counter3+48);
		   }
		   else
		   {
			   LCD_sendchar(counter3/10+48);
			   LCD_sendchar(counter3%10+48);
		   }
       }
       else if (button_read('B',3)==1)
       {
		   counter4++;
		   LCD_movecursor(2,15);
		   if (counter4<10)
		   {
			   LCD_sendchar(counter4+48);
		   }
		   else
		   {
			   LCD_sendchar(counter4/10+48);
			   LCD_sendchar(counter4%10+48);
		   }
       }
       else if (button_read('B',4)==1)
       {
		   counter1=counter2=counter3=counter4=0;
		   LCD_clearscr();
		   LCD_movecursor(1,1);
		   LCD_sendstring("A=0");
		   LCD_movecursor(2,1);
		   LCD_sendstring("B=0");
		   LCD_movecursor(1,13);
		   LCD_sendstring("C=0");
		   LCD_movecursor(2,13);
		   LCD_sendstring("D=0");
       }
       _delay_ms(200);  
    }
}
