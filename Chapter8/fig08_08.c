/*
 * fig08_08.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.8: fig08_08.c
// Using function strtol

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void fig08_08()
{
	const char *string = "1234567abc"; // initialize string pointer

	char *remainderPtr; // create char pointer
	long x; // variable to hold converted sequence

	x = strtoul( string, &remainderPtr, 0 );

	printf( "%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%ld\n",
			"The original string is ", string,
			"The converted value is ", x,
			"The remainder of the original string is ", remainderPtr,
			"The converted value minus 567 is ", x - 567 );
} // end function fig08_08

