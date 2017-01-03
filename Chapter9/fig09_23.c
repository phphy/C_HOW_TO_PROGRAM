/*
 * fig09_23.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 9.23: fig09_23.c
// inputting data with a field width
#include <stdio.h>
#include "main.h"

void fig09_23()
{
	int x;
	int y;

	printf( "%s", "Enter a six digit integer: \n" );
	scanf( "%2d%d", &x, &y );

	printf( "The integers input were %d and %d\n", x, y );
}

