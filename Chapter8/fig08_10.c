/*
 * fig08_10.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.10: fig08_10.c
// Using function fgets and putchar

#include <stdio.h>
#include "main.h"

#define SIZE 80

void reverse( const char * const sPtr ); // prototype

void fig08_10()
{
	char sentence[ SIZE ]; // create char array

	puts( "Enter a line of text:" );

	// use fgets to read line of text
	fgets( sentence, SIZE, stdin );

	puts( "\nThe line printed backward is:" );
	reverse( sentence );
} // end function fig08_10()

void reverse( const char * const sPtr )
{
	// if end of the string
	if ( '\0' == sPtr[ 0 ] ) { // base case
		return;
	} // end if
	else { // if no end of the string
		reverse( &sPtr[ 1 ] ); // recursion step
		putchar( sPtr[ 0 ] ); // use putchar to display
	} // end else
} // end function reverse
