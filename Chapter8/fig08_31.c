/*
 * fig08_31.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.31: fig08_31.c
// Using function memchr
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_31()
{
	const char *s = "This is a string"; // initialize char pointer

	printf( "%s\'%c\'%s\"%s\"\n",
			"The remainder of s after character ", 'r',
			" is found is ", ( char * ) memchr( s, 'r', 16 ) );
} // end function fig08_31

