/*
 * fig07_04.c
 *
 *  Created on: 2014��7��4��
 *      Author: open
 */
// Fig. 7.4: fig07_04.c
// Using the & and * pointer operators

#include <stdio.h>
#include "main.h"

void fig07_04()
{
	int a; // a is an integer
	int *aPtr; // aPtr is a pointer to an integer

	a = 7;
	aPtr = &a; // set aPtr to the address of a

	printf( "The address of a is %p"
			"\nThe value of aPtr is %p", &a, aPtr );

	printf( "\n\nThe value of a is %d"
			"\nThe value of *aPtr is %d", a, *aPtr );

	printf( "\n\nShowing that * and & are complements of "
			"each other\n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, *&aPtr );

} // end fig07_04

