/*
 * fig06_21.c
 *
 *  Created on: 2014Äê6ÔÂ24ÈÕ
 *      Author: open
 */
// Fig. 6.21: fig06_21.c
// Initializing multidimensional arrays.
#include <stdio.h>
#include "main.h"

// function prototype
void printMulArray( int a[][ 3 ] );

// function fig06_21 begins program execution
void fig06_21()
{
	// initialize array1, array2, array3
	int array1[ 2 ][ 3 ] = { { 1, 2, 3,}, { 4, 5, 6 } };
	// int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
	int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

	puts( "Values in array1 by row are:" );
	printMulArray( array1 );

	puts( "Values in array2 by row are:" );
	//printMulArray( array2 );

	puts( "Values in array3 by row are:" );
	printMulArray( array3 );
} // end fig06_21

// function to output array with two rows and three columns
void printMulArray( int a[][ 3 ])
{
	size_t i; // row counter
	size_t j; // column counter

	// loop through rows
	for ( i = 0; i <= 1; ++i ) {

		// output column values
		for ( j = 0; j <= 2; ++j ) {
			printf( "%d ", a[ i ][ j ] );
		} // end inner for

		printf( "\n" ); // start new line of output
	} // end outer for
} // end function printArray

