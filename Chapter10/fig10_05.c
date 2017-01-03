/*
 * fig10_05.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 10.5: fig10_05.c
// Displaying the value of a union in both member data types
#include <stdio.h>
#include "main.h"

// number union definition
union number {
	int x;
	double y;
}; // end union number

void fig10_05()
{
	union number value; // define union variable

	value.x = 100; // put an integer into the union
	printf( "%s\n%s\n%s\n  %d\n\n%s\n  %f\n\n\n",
			"Put 100 in the integer member ",
			"and print both members.",
			"int: ", value.x,
			"double: ", value.y );

	value.y = 100.0; // put a double into the same union
	printf( "%s\n%s\n%s\n  %d\n\n%s\n  %f\n\n\n",
			"Put 100 in the integer member ",
			"and print both members.",
			"int: ", value.x,
			"double: ", value.y );
}
