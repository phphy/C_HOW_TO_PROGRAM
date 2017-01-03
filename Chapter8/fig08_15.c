/*
 * fig08_15.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.15: fig08_15.c
// Using function strcpy and strncpy
#include <stdio.h>
#include <string.h>
#include "main.h"

#define SIZE1 25
#define SIZE2 15

void fig08_15()
{
	char x[] = "Happy Birthday to You"; // initialize char array x
	char y[ SIZE1 ]; // create char array y
	char z[ SIZE2 ]; // create char array z

	// copy contents of x into y
	printf( "%s%s\n%s%s\n",
			"The string in array x is: ", x,
			"The string in array y is: ", strcpy( y, x) );
	// copy first 14 characters of x into z. Does not copy null
	// character
	strncpy( z, x, SIZE2 -1 );
	z[ SIZE2 - 1 ] = '\0'; // terminate string in z
	printf( "The string in array z is: %s\n", z );

} // end function fig08_15

