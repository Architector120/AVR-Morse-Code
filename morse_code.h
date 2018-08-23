/*
 * morse_code.h
 *
 * Created: 22.08.2018 11:45:27
 * Author : Architector120
 * Email  : architector120@cantseeme.xyz
 */

#ifndef MORSE_CODE_H_
#define MORSE_CODE_H_

//=====================================================
//	Setup output pin.
//=====================================================
#define MORSE_DDR			DDRB
#define MORSE_PORT			PORTB
#define MORSE_PIN			PINB0

//=====================================================
//	Morse code timing.
//=====================================================
#define morse_dot_time		100
#define morse_dash_time		280
#define morse_next_b_time	100
#define morse_next_l_time	280
#define morse_space_time	650

//=====================================================
//	Functions.
//=====================================================
#define morse_init(void) MORSE_DDR |= (1 << MORSE_PIN);
extern void morse_transmit(char num, char data);
extern void morse_puts(char *puts);
extern void morse_putc(char putc);

//=====================================================
//	ASCII to Morse Code Conversion Array.
//=====================================================
extern const char ascii_to_morse[95][2];

#endif /* MORSE_CODE_H_ */