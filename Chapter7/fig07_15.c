/*
 * fig07_15.c
 *
 *  Created on: 2014Äê7ÔÂ15ÈÕ
 *      Author: open
 */
// Fig. 7.15: fig07_15.c
// Putting values to an array, sorting the value into
// ascending order and printing the resulting array.

#include <stdio.h>
#include "main.h"

#define SIZE 10

void bubbleSort( int * const array, size_t size ); // function prototype

void fig07_15()
{
	// initialize array a
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	size_t i; // counter

	puts( "Data items in original order" );

	// loop through array a
	for ( i = 0; i < SIZE; ++i ) {
		printf( "%4d", a[ i ] );
	} // end for

	bubbleSort( a, SIZE ); // sort the array

	puts( "\nData items in ascending order" );

	// loop through array a
	for ( i = 0; i < SIZE; ++i ) {
		printf( "%4d", a[ i ] );
	} // end for

	puts( "" );
}

// sort an array of integers using bubble sort algorithm
void bubbleSort( int * const array, size_t size )
{
	void swap( int *element1Ptr, int *element2Ptr ); // function prototype

	unsigned int pass; // pass counter
	size_t j; // counter

	// loop to control passes
	for ( j = 0; j < size - 1; ++pass ) {

		// loop to control comparisons during each pass
		for ( j = 0; j < size - 1; ++j ) {

			// swap adjacent elements if they're out of order
			if ( array[ j ] > array[ j + 1 ] ) {
				swap( &array[ j ], &array[ j + 1 ] );
			} // end if
		} // end inner for
	} // end outer for
} // end function bubbleSort

// swap values at memory locations to which element1Ptr and
// element2Ptr point
void swap( int *element1Ptr, int *element2Ptr )
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
} // end function swap

