/*
 * fig08_18.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.18: fig08_18.c
// Using function strcmp and strncmp
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_18()
{
	const char *s1 = "Happy New Year"; // initialize char pointer
	const char *s2 = "Happy New Year"; // initialize char pointer
	const char *s3 = "Happy Holiday"; // initialize char pointer

	printf( "%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
			"s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
			"strcmp( s1, s2 ) = ", strcmp( s1, s2 ),
			"strcmp( s1, s2 ) = ", strcmp( s1, s3 ),
			"strcmp( s3, s1 ) = ", strcmp( s3, s1 ) );

	printf( "%s%2d\n%s%2d\n%s%2d\n",
			"strncmp( s1, s3, 6 ) = ", strncmp( s1, s3, 6 ),
			"strncmp( s1, s3, 7 ) = ", strncmp( s1, s3, 7 ),
			"strncmp( s3, s1, 7 ) = ", strncmp( s3, s1, 7 ) );
} // end function fig08_18

