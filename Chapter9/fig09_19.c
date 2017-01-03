/*
 * fig09_19.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 9.19: fig09_19.c
// Reading input with floating-point conversion specifiers
#include <stdio.h>
#include "main.h"

// function main begins program execution
void fig09_19()
{
	double a;
	double b;
	double c;

	puts( "Enter three floating-point numbers:" );
	scanf( "%le%lf%lg", &a, &b, &c );

	puts( "\nHere are the number entered in plain:" );
	puts( "floating-point notation:\n" );
	printf( "%f\n%f\n%f\n", a, b, c );

} // end function fig09_19
