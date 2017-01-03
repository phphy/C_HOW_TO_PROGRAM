/*
 * fig08_12.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.12: fig08_12.c
// Using function sprintf
#include <stdio.h>
#include "main.h"

#define SIZE 80

void fig08_12()
{
	char s[ SIZE ]; // create char array
	int x; // x value to be input
	double y; // y value to be input

	puts( "Enter an integer and a double:" );
	scanf( "%d%lf", &x, &y );

	sprintf( s, "integer:%6d\ndouble:%8.2f", x, y );

	printf( "%s\n%s\n", "The formatted output stored in array s is:", s );
} // end function fig08_12

