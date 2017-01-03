/*
 * fig07_11.c
 *
 *  Created on: 2014Äê7ÔÂ4ÈÕ
 *      Author: open
 */
// Fig. 7.11: fig07_11.c
// Printing a string one character at a time
// a non-constant pointer to constant data.

#include <stdio.h>
#include "main.h"

void printCharacters( const char *sPtr ); // function prototype

void fig07_11()
{
	// initialize char array
	char string[] = "print characters of a string";

	puts( "The string is:" );
	printCharacters( string );
	puts( "" );
} // end function fig07_11

// sPtr cannot modify the character to which it points,
// i.e., sPtr is a "read-only" pointer
void printCharacters( const char *sPtr )
{

	// loop through entire string
	for ( ; *sPtr != '\0'; ++sPtr ) { // no initialization
		printf( "%c", *sPtr );
	} // end for
} // end function printCharacters
