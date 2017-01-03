/*
 * fig08_30.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.30: fig08_30.c
// Using function memcmp
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_30()
{
	char s1[] = "ABCDEFG"; // initialize char array s1
	char s2[] = "ABCDXYZ"; // initialize char array s2

	printf( "%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
			"s1 = ", s1, "s2 = ", s2,
			"memcmp( s1, s2, 4 ) = ", memcmp( s1, s2, 4 ),
			"memcmp( s1, s2, 7 ) = ", memcmp( s1, s2, 7 ),
			"memcmp( s2, s1, 7 ) = ", memcmp( s1, s2, 7 ) );
} // end function fig08_30

