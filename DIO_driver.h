/*
 * DIO_Declerations.h
 *
 * Created: 10/5/2023 2:44:21 AM
 *  Author: HaNdSyA---
 */ 


#ifndef DIO_DECLERATIONS_H_
#define DIO_DECLERATIONS_H_
void DIO_setpindir(char PORT,char PIN,char dir);

void DIO_pinwrite(char PORT,char pin,char val);

void DIO_togglepin(char PORT,char PIN);

char DIO_read(char PORT,char PIN);

void DIO_setportdir(char PORT,char dir);

void DIO_portwrite(char PORT, char val);

char DIO_readport(char PORT);

void DIO_toggleport(char PORT);

void DIO_writelownipple(char port, char val);

void DIO_writehighnipple(char port, char val);
#endif /* DIO_DECLERATIONS_H_ */
