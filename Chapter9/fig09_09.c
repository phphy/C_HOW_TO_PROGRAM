/*
 * fig09_09.c
 *
 *  Created on: 2014Äê8ÔÂ7ÈÕ
 *      Author: open
 */
// Fig. 9.9: fig09_09.c
// Printing integers, floating-point numbers and string with precisions
#include <stdio.h>
#include "main.h"

void fig09_09()
{
	int i = 873; // initialize integer i
	double f = 123.94536; // initialize double f
	char s[] = "Happy Birthday"; // initialize char array s

	puts( "Using precision for integers" );
	printf( "\t%.4d\n\t%.9d\n\n", i, i );

	puts( "Using precision for floating-point numbers" );
	printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );

	puts( "Using precision for sting" );
	printf( "\t%.11s\n", s );
} // end function fig09_09


