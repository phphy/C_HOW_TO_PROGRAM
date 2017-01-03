/*
 * fig06_14.c
 *
 *  Created on: 2014Äê6ÔÂ18ÈÕ
 *      Author: open
 */
// Fig. 6.14: fig06_14.c
// Using the const type qualifier with arrays.
#include <stdio.h>

//void tryToModifyArray( const int b[] ); // function prototype
void tryToModifyArray( int b[] ); // function prototype
// function fig06_14 begins program execution
void fig06_14()
{
	int a[] = { 10, 20, 30 }; // initialize array a

	tryToModifyArray( a );

	printf( "%d%d%d\n", a[ 0 ], a[ 1 ], a[ 2 ] );
} // end main

// in function tryToModifyArray, array b is const, so it cannot be
// used to modify the original array a
//void tryToModifyArray( const int b[] )
void tryToModifyArray( int b[] )
{
	b[ 0 ] /= 2; // error
	b[ 1 ] /= 2; // error
	b[ 2 ] /= 2; // error
} // end function tryToModifyArray

