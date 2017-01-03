/*
 * fig10_13.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 10.13: fig10_13.c
// Using the bitwise shift operators
#include <stdio.h>
#include "main.h"

void displayBits( unsigned int value ); // prototype

void fig10_13()
{
	unsigned int number1 = 960; // initialize number1

	// demonstrate bitwise left shift
	puts( "\nThe result of left shifting" );
	displayBits( number1 );
	puts( "8 bit positions using the left shift operator << is" );
	displayBits( number1 << 8 );

	// demonstrate bitwise right shift
	puts( "\nThe result of right shifting" );
	displayBits( number1 );
	puts( "8 bit positions using the right shift operator >> is" );
	displayBits( number1 >> 8 );
}

