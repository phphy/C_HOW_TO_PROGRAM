/*
 * fig07_21.c
 *
 *  Created on: 2014Äê7ÔÂ16ÈÕ
 *      Author: open
 */
// fig. 7.21: fig07_21.c
// Copying a string using array notation and pointer notation

#include <stdio.h>
#include "main.h"

#define SIZE 10

void copy1( char * const s1, const char * const s2 ); // function prototype
void copy2( char *s1, char *s2); // function prototype

void fig07_21()
{
	char string1[ SIZE ]; // create array string1
	char *string2 = "Hello"; // create a pointer to a string
	char string3[ SIZE ]; // create array string3
	char string4[] = "Good bye"; // create a pointer to a string

	copy1( string1, string2 );
	printf( "string1 = %s\n", string1 );

	copy2( string3, string4 );
	printf( "string3 = %s\n", string3 );
} // end function fig07_21

// copy s2 to s1 using array notation
void copy1( char * const s1, const char * const s2 )
{
	size_t i; // counter

	// loop through strings
	for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; ++i ) {
		; // do nothing in body
	} // end for
} // end function copy1

// copy s2 to s1 using pointer notation
void copy2( char *s1, char *s2 )
{
	for ( ; ( *s1 = *s2 ) != '\0'; ++s1, ++s2 ) {
		; // do nothing in body
	} // end for
} // end function copy2

