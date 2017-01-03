/*
 * fig08_32.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.32: fig08_32.c
// Using function memset
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_32()
{
	char string1[ 15 ] = "BBBBBBBBBBBBBB"; // initialize string1

	printf( "string1 = %s\n", string1 );
	printf( "string1 after memset = %s\n",
			( char * ) memset( string1, 'b', 7 ) );
} // end function fig08_32

