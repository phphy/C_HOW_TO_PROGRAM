/*
 * fig08_11.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.11: fig08_11.c
// Using function getchar.

#include <stdio.h>
#include "main.h"

#define SIZE 80

void fig08_11()
{
	int c; // variable to hold character input by user
	char sentence[ SIZE ]; // create char array
	int i = 0; // initialize counter i

	// prompt user to enter line of text
	puts( "Enter o line of text:" );

	// use getchar to read each character
	while ( i < SIZE - 1 && ( c = getchar() ) != '\n' ) {
		sentence[ i++ ] = c;
	} // end while

	sentence[ i ] = '\0';
	// use puts to display sentence
	puts( "\nThe line entered was:" );
	puts( sentence );

} // end function fig08_11

