/*
 * Button_Driver.c
 *
 * Created: 11/6/2023 4:08:29 PM
 *  Author: HaNdSyA---
 */ 
#include "DIO_driver.h"
void button_init(char port,char pin)
{
	DIO_setpindir(port ,pin ,0);
}
char button_read(char port,char pin)
{
	return DIO_read(port ,pin);
}
