/*
 * fig09_07.c
 *
 *  Created on: 2014Äê8ÔÂ7ÈÕ
 *      Author: open
 */
// Fig. 9.7: fig09_07.c
// Using the p and % conversion specifiers
#include <stdio.h>
#include "main.h"

void fig09_07()
{
	int *ptr; // define pointer to int
	int x = 12345; // initialize int x

	ptr = &x; // assign address of x to ptr
	printf( "The value of ptr is %p\n", ptr );
	printf( "The address of x is %p\n", &x );

	puts( "Printing a % in a format control string" );
} // end function fig09_07
