/*
 * fig09_14.c
 *
 *  Created on: 2014Äê8ÔÂ11ÈÕ
 *      Author: open
 */
// Fig. 9.14: fig09_14.c
// Using the # flag with conversion specifiers
// o, x, X and any floating-point specifiers
#include <stdio.h>
#include "main.h"

void fig09_14()
{
	int c = 1427; // initialize c
	double p = 1427.0; // initialize p

	printf( "%#o\n", c );
	printf( "%#x\n", c );
	printf( "%#X\n", c );
	printf( "\n%g\n", p );
	printf( "%#g\n", p );

} // end function fig09_14
