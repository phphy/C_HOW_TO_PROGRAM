/*
 * fig08_28.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.28: fig08_28.c
// Using function memcpy
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_28()
{
	char s1[ 17 ]; // create char array s1
	char s2[] = "Copy this string"; // initialize char array s2

	memcpy( s1,s2, 17 );
	printf( "%s\n%s\"%s\"\n",
			"After s2 is copied into s1 with memcpy,",
			"s1 contains ", s1 );
} // end function fig08_28

