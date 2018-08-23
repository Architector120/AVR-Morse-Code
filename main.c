/*
 * ATtiny13A_Morse_Code_Transmitter.c
 *
 * Created: 22.08.2018 11:45:27
 * Author : Architector120
 * Email  : architector120@cantseeme.xyz
 */ 

#define  F_CPU 1200000UL
#include <avr/io.h>
#include <util/delay.h>
#include "morse_code.h"

int main(void)
{
	morse_init();
	while (1) 
	{
		morse_puts("Hello, world!");
		_delay_ms(3000);
	}
}

