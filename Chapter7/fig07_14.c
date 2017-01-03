/*
 * fig07_14.c
 *
 *  Created on: 2014Äê7ÔÂ15ÈÕ
 *      Author: open
 */
// Fig. 7.14: fig07_14.c
// Attempting to modify a constant pointer to constant data.

#include <stdio.h>
#include "main.h"

void fig07_14()
{
	int x = 5; // initialize x
	// int y; // define y

	// ptr is constant pointer to a constant integer. ptr always
	// points to the same location; the integer at that location
	// cannot be modified
	const int *const ptr = &x; // initialization is OK

	printf( "%d\n", *ptr );
	// *ptr = 7; // error: *ptr is const; cannot assign new value
	// ptr = &y; // error: ptr is const; cannot assign new address
} // end function fig07_14

