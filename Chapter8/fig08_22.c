/*
 * fig08_22.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.22: fig08_22.c
// Using function strpbrk
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_22()
{
	const char *string1 = "This is a test"; // initialize char pointer
	const char *string2 = "beware"; // initialize char pointer

	printf( "%s\"%s\"\n\'%c\'%s\n\"%s\"\n",
			"Of the characters in ", string2,
			*strpbrk( string1, string2),
			" appears earliest in ", string1 );
} // end function fig08_22

