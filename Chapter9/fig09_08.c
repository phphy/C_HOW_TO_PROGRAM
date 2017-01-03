/*
 * fig09_08.c
 *
 *  Created on: 2014Äê8ÔÂ7ÈÕ
 *      Author: open
 */
// Fig. 9.8: fig09_08.c
// Right justifying integers in a field
#include <stdio.h>
#include "main.h"

void fig09_08()
{
	printf( "%4d\n", 1 );
	printf( "%4d\n", 12 );
	printf( "%4d\n", 123 );
	printf( "%4d\n", 1234 );
	printf( "%4d\n\n", 12345 );

	printf( "%4d\n", -1 );
	printf( "%4d\n", -12 );
	printf( "%4d\n", -123 );
	printf( "%4d\n", -1234 );
	printf( "%4d\n\n", -12345 );

} // end function fig09_08
