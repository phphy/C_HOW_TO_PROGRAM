/*
 * fig07_06.c
 *
 *  Created on: 2014Äê7ÔÂ4ÈÕ
 *      Author: open
 */
// Fig. 7.6: fig07_06.c
// Cube a variable using a pass-by-value.
#include <stdio.h>
#include "main.h"

int cubeByValue( int n ); // function prototype

void fig07_06()
{
	int number = 5; // initialize number

	printf( "The original value of number is %d", number );

	// pass number by value to cubeByValue
	number = cubeByValue( number );

	printf( "\nThe new value of number is %d\n", number );

} // end function fig07_06

// calculate and return cube of integer argument
int cubeByValue( int n)
{
	return n * n * n; // cube local variable n and return result
} // end function cubeByValue

