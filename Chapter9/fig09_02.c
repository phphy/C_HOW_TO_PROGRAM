/*
 * fig09_02.c
 *
 *  Created on: 2014Äê8ÔÂ7ÈÕ
 *      Author: open
 */
// Fig. 9.2: fig09_02.c
// Using the integer conversion specifies
#include <stdio.h>
#include "main.h"

void fig09_02()
{
	printf( "%d\n", 455 );
	printf( "%i\n", 455 ); // i same as d in printf
	printf( "%d\n", +455 ); // plus sign does not print
	printf( "%d\n", -455 ); // minus sign prints
	printf( "%hd\n", 3200 );
	printf( "%ld\n", 2000000000L ); // L suffix makes literal a long int
	printf( "%o\n", 455 ); // octal
	printf( "%u\n", 455 );
	printf( "%u\n", -455 );
	printf( "%x\n", 455 ); // hexadecimal with lowercase letters
	printf( "%X\n", 455 ); // hexadecimal with lowercase letters
} // end function fig09_02

