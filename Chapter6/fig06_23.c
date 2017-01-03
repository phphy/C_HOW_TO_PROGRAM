/*
 * fig06_23.c
 *
 *  Created on: 2014Äê7ÔÂ3ÈÕ
 *      Author: open
 */
// Fig. 6.23: fig06_23.c
// Using variable-length arrays in c99
#include <stdio.h>
#include "main.h"

// function prototype
void print1DArray( int size, int arr[ size ] );
void print2DArray( int row, int col, int arr[ row ][ col ] );

// function fig06_23 begins program execution
void fig06_23()
{
	int arraySize; // size of 1-D array
	int row1, col1, row2, col2; // number of rows and column in 2-D arrays

	printf( "%s", "Enter size of a one-dimensional array: \n" );
	scanf( "%d", &arraySize );

	printf( "%s", "\nEnter number of rows and columns in a 2-D array: \n" );
	scanf( "%d %d", &row1, &col1 );

	printf( "%s", "\nEnter number of rows and columns in another 2-D array: \n" );
	scanf( "%d %d", &row2, &col2 );

	int array[ arraySize ]; // declare 1-D variable-length array
	int array2D1[ row1 ][ col1 ]; // declare 2-D variable-length array
	int array2D2[ row2 ][ col2 ]; // declare 2-D variable-length array

	// test sizeof operator on VLA
	printf( "\nsizeof(array) yields array size of %d bytes\n", sizeof( array ) );

	// assign elements of 1-D VLA
	for ( int i = 0; i < arraySize; ++i ) {
		array[ i ] = i * i;
	} // end for

	// assign elements of first 2-D VLA
	for ( int i = 0; i < row1; ++i ) {
		for( int j = 0; j < col1; ++j ) {
			array2D1[ i ][ j ] = i + j;
		} // end inner for
	} // end outer for

	// assign elements of second 2-D VLA
	for ( int i = 0; i < row2; ++i ) {
		for ( int j = 0; j < col2; ++j ) {
			array2D2[ i ][ j ] = i + j;
		} // end inner for
	} // end outer for

	puts( "\nOne-dimensional array:" );
	print1DArray( arraySize, array ); // pass 1-D VLA to function

	puts( "\nFirst two-dimensional array:" );
	print2DArray( row1, col1, array2D1 ); // pass first 2-D VLA to function

	puts( "\nSecond two-dimensional array:" );
	print2DArray( row2, col2, array2D2 ); // pass second 2-D VLA to function


} // end function fig06_23

void print1DArray( int size, int array[ size ] )
{
	// output contents of array
	for ( int i = 0; i < size; ++i ) {
		printf( "array[%d] = %d\n", i, array[ i ] );
	} // end for
} // end function print1DArray

void print2DArray( int row, int col, int arr[ row ][ col ] )
{
	// output contents of array
	for ( int i = 0; i < row; ++i ) {
		for ( int j = 0; j < col; ++j ) {
			printf( "%5d", arr[ i ][ j ] );
		} // end inner for

		puts( "" );

	} // end outer for
} // end function print2DArray


