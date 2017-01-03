/*
 * fig10_07.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 10.7: fig10_07.c
// Displaying an unsigned integer in bits
#include <stdio.h>
#include "main.h"

void displayBits( unsigned int value ); // prototype

void fig10_07()
{
	unsigned int x; // variable to hold user input

	printf( "%s", "Enter a nonnegative int: \n" );
	scanf( "%u", &x );

	displayBits( x );
} // end function

// display bits of an unsigned integer value
void displayBits( unsigned int value )
{
	unsigned int c; // counter
	// define displayMask and left shift 31 bits
	unsigned int displayMask = 1 << 31;

	printf( "%10u = ", value );

	// loop through bits
	for ( c =1; c <= 32; ++c ) {
		putchar( value & displayMask ? '1' : '0' );
		value <<= 1; // shift value left by 1

		if ( c % 8 == 0 ) { // output space after 8 bits
			putchar( ' ' );
		} // end if
	} // end for

	putchar( '\n' );
} // end function displayBits

