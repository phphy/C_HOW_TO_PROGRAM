/*
 * fig06_19.c
 *
 *  Created on: 2014��6��20��
 *      Author: open
 */
// Fig. 6.19: fig06_19.c
// Binary search of a sorted array.

#include <stdio.h>
#include "main.h"

#define SIZE 15

// function prototype
size_t binarySearch( const int b[], int searchKey, size_t low, size_t high );
void printHeader( void );
void printRow( const int b[], size_t low, size_t mid, size_t high );

// function fig06_19 begins program execution
void fig06_19()
{
	int a[ SIZE ]; // create array a
	size_t i; // counter for initializing element of array a
	int key; // value to locate in array a
	size_t result; // variable to hold location of key or -1

	// create data
	for ( i = 0; i < SIZE; ++i ) {
		a[ i ] = 2 * i;
	} // end for

	printf( "%s", "Enter a number between 0 and 28: ");
	scanf( "%d", &key );

	printHeader();

	// search for key in array a
	result = binarySearch( a, key, 0, SIZE - 1 );

	// display results
	if ( result != -1 ) {
		printf( "\n%d found in array element %d\n", key, result );
	} // end if
	else {
		printf( "\n%d not found\n", key);
	} // end else
} // end fig06_19

// function to perform binary search of an array
size_t binarySearch( const int b[], int searchKey, size_t low, size_t high )
{
	int middle; // variable to hold middle of array

	// loop until low subscript is greater than high searched
	while ( low <= high ) {
		middle = ( low + high ) / 2;

		// display subarray used in this loop iteration
		printRow( b, low, middle, high );

		// if searchKey matched middle element, return middle
		if ( searchKey == b[ middle ] ) {
			return middle;
		} // end if

		// if searchKey less than middle element, set new high
		else if ( searchKey < b[ middle ] ) {
			high = middle - 1; // search low end of array
		} // end else if

		// if searchKey greater than middle element, set new low
		else {
			low = middle + 1;
		} // end else
	} // end while

	return -1; // searchKey not found
} // end function binarySearch

// Print a header for the output
void printHeader( void )
{
	unsigned int i; // counter

	puts( "\nSubscripts:" );

	// output column head
	for ( i = 0; i < SIZE; ++i ) {
		printf( "%3u ", i );
	} // end for

	puts( "" ); // start new line of output

	// output line of - character
	for ( i = 1; i <= 4 * SIZE; ++i ) {
		printf( "%s", "-" );
	} // end for

	puts( "" ); // start new line of output
} // end function printHeader

// Print one row of output showing the current
// part of the array being processed.
void printRow( const int b[], size_t low, size_t mid, size_t high )
{
	size_t i; // counter for iterating through array b

	// loop through entire array
	for ( i = 0; i < SIZE; ++i ) {

		// display spaces if outside current subarray range
		if ( i < low || i > high ) {
			printf( "%s", "    ");
		} // end if
		else if ( i == mid ) { // display middle element
			printf( "%3d*", b[ i ] ); // mark middle value
		} // end else if
		else { // display other elements in subarray
			printf( "%3d ", b[ i ] );
		} // end else
	} // end for

	puts( "" ); // start new line of output
} // end function printRow


