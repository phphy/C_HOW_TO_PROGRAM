/*
 * fig06_12.c
 *
 *  Created on: 2014Äê6ÔÂ13ÈÕ
 *      Author: open
 */
// Fig. 6.12: fig06_12.c
// Array name is the same as the address of the array's first element.
#include <stdio.h>
#include "main.h"

// function fig06_12 begins program execution
void fig06_12()
{
	char array[ 5 ]; // define an array of size 5

	printf( "    array = %p\n&array[0] = %p\n   &array = %p\n", array, &array[ 0 ], &array );

} // end main

