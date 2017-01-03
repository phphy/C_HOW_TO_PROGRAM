/*
 * fig08_24.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.24: fig08_24.c
// Using function strspn
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_24()
{
	// initialize two char pointer
	const char *string1 = "The value is 3.14159";
	const char *string2 = "aehi lsTuv";

	printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
			"string1 = ", string1, "string2 = ", string2,
			"The length of the initial segment of string1",
			"containing only characters from string2 = ",
			strspn( string1, string2) );
}

