/*
 * fig08_35.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.35: fig08_35.c
// Using function strlen
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_35()
{
	// initialize 3 char pointers
	const char *string1 = "abcdefghijklmnopqrstuvwxyz";
	const char *string2 = "four";
	const char *string3 = "Boston";

	printf( "%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\"%s\"%s%u\n",
			"The length of ", string1, " is ", strlen( string1 ),
			"The length of ", string2, " is ", strlen( string2 ),
			"The length of ", string3, " is ", strlen( string3 ) );
}

