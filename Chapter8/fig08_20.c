/*
 * fig08_20.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.20: fig08_20.c
// Using function strchr

#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_20()
{
	const char *string = "This is a test"; // initialize char pointer
	char character1 = 'a'; // initialize character1
	char character2 = 'z'; // initialzie character2

	// if character1 was found in string
	if ( strchr( string, character1 ) != NULL ) {
		printf( "\'%c\' was found in \"%s\".\n", character1, string );
	} // end if
	else { // if character1 was not found
		printf( "\'%c\' was not found in \"%s\".\n", character2, string );
	} // end else

	// if character2 was found in string
	if ( strchr( string, character2 ) != NULL ) {
		printf( "\'%c\' was found in \"%s\". \n", character2, string );
	} // end if
	else { // if character2 was not found
		printf( "\'%c\' was not found in \"%s\".\n", character2, string );
	} // end else
} // end function fig08_20

