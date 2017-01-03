/*
 * fig06_04.c
 *
 *  Created on: 2014Äê5ÔÂ20ÈÕ
 *      Author: open
 */
// Fig. 6.4: fig06_04.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>
#include "main.h"

// function fig06_04 begins program execution
void fig06_04()
{
	// use initializer list to initialize array n
	int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
	size_t i;// counter

	printf( "%s%13s\n", "Element", "Value" );

	// output contents of array in tabular format
	for ( i = 0; i < 10; ++i ){
		printf( "%7u%13u\n", i, n[ i ] );
	}//end for
}// end fig06_04
