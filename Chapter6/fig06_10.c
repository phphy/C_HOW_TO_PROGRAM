/*
 * fig06_10.c
 *
 *  Created on: 2014��6��12��
 *      Author: open
 */
// Fig. 5.10: fig06_10.c
// Treating character arrays as strings.

#include <stdio.h>
#include "main.h"

#define SIZE 20

// function fig05_10 begins program execution
void fig06_10()
{
	char string1[ SIZE ]; // reserves 20 characters
	char string2[] = "string literal"; // reserves 15 characters
	size_t i; // counter

	// read string from user into array string1
	printf( "%s", "Enter a string (no longer than 19 characters):" );
	scanf( "%19s", string1 ); // input no more than 19 characters

	// output strings
	printf( "string1 is: %s\nstring2 is: %s\n"
			"string1 with spaces between characters is:\n",
			 string1, string2 );

	// output characters until null character is reached
	for ( i = 0; i < SIZE && string1[ i ] != '\0'; ++i ){
		printf( "%c ", string1[ i ] );
	} // end for

	puts( "" );
} // end fig06_10
