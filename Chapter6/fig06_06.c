/*
 * fig06_06.c
 *
 *  Created on: 2014Äê6ÔÂ10ÈÕ
 *      Author: open
 */
//Fig. 6.6: fig06_06.c
//Computing the sum of the elements of an array

#include <stdio.h>
#include "main.h"

#define SIZE 12

// function fig06_06 begins program execution
void fig06_06()
{
	//use an initializer list to initialize the array
	int a[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
	size_t i;// counter
	int total = 0; // sum of array

	// sum contents of array a
	for ( i = 0; i < SIZE; ++i ){
		total += a[ i ];
	}//end for

	printf( "Total of array element value is %d\n", total );
}// end main

