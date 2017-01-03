/*
 * fig08_29.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.29: fig08_29.c
// Using function memmove
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_29()
{
	char x[] = "Home Sweet Home"; // initialize char array x

	printf( "%s%s\n", "The string in array x before memmove is: ", x );
	printf( "%s%s\n", "The string in array x after memmove is: ",
			( char * ) memmove( x, &x[ 5 ], 10 ) );
} // end function fig08_29

