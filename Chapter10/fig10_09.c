/*
 * fig10_09.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Using the bitwise AND, bitwise inclusive OR, bitwise
// exclusive OR and bitwise complement operators
#include <stdio.h>
#include "main.h"

void displayBits( unsigned int value ); // prototype

void fig10_09()
{
	unsigned int number1;
	unsigned int number2;
	unsigned int mask;
	unsigned int setBits;

	// demonstrate bitwise AND (&)
	number1 = 65535;
	mask = 1;
	puts( "The result of combining the following" );
	displayBits( number1 );
	displayBits( mask );
	puts( "using the bitwise AND operator & is " );
	displayBits( number1 & mask );

	// demonstrate bitwise inclusive OR (|)
	number1 = 15;
	setBits = 241;
	puts( "\nThe result of combining the following" );
	displayBits( number1 );
	displayBits( setBits );
	puts( "using the bitwise inclusive OR operator | is" );
	displayBits( number1 | setBits );

	// demonstrate bitwise exclusive OR (^)
	number1 = 139;
	number2 = 199;
	puts( "\nThe result of combining the following" );
	displayBits( number1 );
	displayBits( number2 );
	puts( "using the bitwise exclusive OR operator ^ is" );
	displayBits( number1 ^ number2 );

	// demonstrate bitwise complement (~)
	number1 = 21845;
	puts( "\nThe one's complement of" );
	displayBits( number1 );
	puts( " is " );
	displayBits( ~number1 );
} // end function fig10_09

