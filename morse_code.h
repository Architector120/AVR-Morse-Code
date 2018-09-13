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
//Approximate number of words per minute
//Set the value from 1 to 1200
#define MORSE_WPM			12
// sending dot
#define MORSE_DOT			60000/MORSE_WPM/50
// sending dash
#define MORSE_DASH			MORSE_DOT * 3
// inter-character gap
#define MORSE_CHAR_GAP		MORSE_DOT
// gap between letters
#define MORSE_LETTER_GAP	MORSE_DOT * 3
// gap between words
#define MORSE_WORD_GAP		MORSE_DOT * 7

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