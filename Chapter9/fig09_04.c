/*
 * fig09_04.c
 *
 *  Created on: 2014Äê8ÔÂ7ÈÕ
 *      Author: open
 */
// Fig. 9.4: fig09_04.c
// Using the floating-point conversion specifiers
#include <stdio.h>
#include "main.h"

void fig09_04()
{
	printf( "%e\n", 1234567.89 );
	printf( "%e\n", +1234567.89 ); // plus does not print
	printf( "%e\n", -1234567.89 ); // minus prints
	printf( "%E\n", 1234567.89 );
	printf( "%f\n", 1234567.89 );
	printf( "%.1f\n", 1234567.89 );
	printf( "%g\n", 1234567.89 );
	printf( "%G\n", 1234567.89 );
} // end function fig09_04

