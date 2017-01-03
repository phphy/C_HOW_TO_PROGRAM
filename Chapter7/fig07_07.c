/*
 * fig07_07.c
 *
 *  Created on: 2014Äê7ÔÂ4ÈÕ
 *      Author: open
 */
// Fig. 7.7: fig07_07.c
// Cube a variable using pass-by-reference with a pointer argument.

#include <stdio.h>
#include "main.h"

void cubeByReference( int *nPtr ); // function prototype

void fig07_07()
{
	int number = 5; // initialize number

	printf( "The original value of number is %d", number );

	// pass address of number to cubeByReference
	cubeByReference( &number );

	printf( "\nThe new value of number is %d\n", number );
} // end function fig07_07

// calculate cube of *nPtr; actually modifies number in fig07_07
void cubeByReference( int *nPtr )
{
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
} // end function cubeByReference

