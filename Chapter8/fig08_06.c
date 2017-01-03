/*
 * fig08_06.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.6: fig08_06.c
// Using function strtod

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void fig08_06()
{
	// initialize string pointer
	const char *string = "51.2% are admitted"; // initialize string

	double d; // variable to hold converted sequence
	char *stringPtr; // create char pointer

	d = strtod( string, &stringPtr );

	printf( "The string \"%s\" is converted to the\n", string );
	printf( "double value %.2f and the string \"%s\"\n", d, stringPtr );

} // end function fig08_06

