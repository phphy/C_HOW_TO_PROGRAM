/*
 * fig09_20.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 9.20: fig09_20.c
// Reading characters and strings
#include <stdio.h>
#include "main.h"

void fig09_20()
{
	char x;
	char y[ 9 ];

	printf( "%s", "Enter a string: " );
	scanf( "%c%8s", &x, y );

	puts( "The input was:\n" );
	printf( "the character \"%c\" and the string \"%s\"\n", x, y );
}

