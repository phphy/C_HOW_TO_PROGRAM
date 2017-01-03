/*
 * fig08_25.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.25: fig08_25.c
// Using function strstr
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_25()
{
	const char *string1 = "abcdabcdef"; // string to search
	const char *string2 = "def"; // string to search for

	printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
			"string1 = ", string1, "string2 = ", string2,
			"The reminder of string1 beginning with the",
			"first occurrence of string2 is: ",
			strstr( string1, string2 ) );
} // end function fig08_25

