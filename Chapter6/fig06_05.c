/*
 * fig06_05.c
 *
 *  Created on: 2014Äê5ÔÂ20ÈÕ
 *      Author: open
 */
//Initializing the elements of array s to the even integers from 2 to 20.
#include <stdio.h>
#include "main.h"

#define SIZE 20 // maximum size of array

// function fig06_05 begins program execution
void fig06_05()
{
	// symbolic constant SIZE can be used to specify array size
	int s[ SIZE ];// array s has SIZE elements
	size_t j;// counter

	for ( j = 0; j < SIZE; ++j ){ //set the values
		s[ j ] = 2 + 2 * j;
	}//end for

	printf( "%s%13s\n", "Element", "Value" );

	// output contents of array s in tabular format
	for ( j = 0; j < SIZE; ++j ){
		printf( "%7u%13d\n", j, s[ j ] );
	}//end for
}//end fig06_05
