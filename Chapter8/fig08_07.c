/*
 * fig08_07.c
 *
 *  Created on: 2014��8��5��
 *      Author: open
 */
// Fig. 8.7: fig08_07.c
// Using function strtol

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void fig08_07()
{
	const char *string = "-1234567abc"; // initialize string pointer

	char *remainderPtr; // create char pointer
	long x; // variable to hold converted sequence

	x = strtol( string, &remainderPtr, 0 );

	printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
			"The original string is ", string,
			"The converted value is ", x,
			"The remainder of the original string is ", remainderPtr,
			"The converted value plus 567 is ", x + 567 );
} // end function fig08_07

