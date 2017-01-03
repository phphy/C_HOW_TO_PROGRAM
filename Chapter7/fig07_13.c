/*
 * fig07_13.c
 *
 *  Created on: 2014Äê7ÔÂ9ÈÕ
 *      Author: open
 */
// Fig. 7.13: fig07_13.c
// Attempting to modify a constant pointer to non-constant data.
#include <stdio.h>
#include "main.h"

void fig07_13()
{
	int x; // define x
	//int y; // define y

	// ptr is a constant pointer to an integer that can be modified
	// through ptr, but ptr always points to the same memory location
	int * const ptr = &x;
	printf("x's value is %d", x );
	printf("\n* const ptr's value is %d", *ptr );

	*ptr = 7; // allowed: *ptr is not const

	printf("\n* const ptr's value is %d", *ptr );

	//ptr = &y; // error: ptr is const; cannot assign new address

} // end function fig07_13

