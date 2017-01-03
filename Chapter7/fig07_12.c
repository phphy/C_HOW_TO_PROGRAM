/*
 * fig07_12.c
 *
 *  Created on: 2014Äê7ÔÂ9ÈÕ
 *      Author: open
 */
// Fig. 7.12: fig07_12.c
// Attempting to modify data through a
// non-constant pointer to constant data.
#include <stdio.h>
#include "main.h"

void f( const int *xPtr ); // prototype

// function fig07_12 program begins execution
void fig07_12()
{
	int y; // define y

	f( &y ); // f attempts illegal modification

} // end function fig07_12

void f( const int *xPtr )
{
	// *xPtr = 100; // error: cannot modify a constant object
	printf( "*XPtr's value is %d", *xPtr );
} // end function f

