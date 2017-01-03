/*
 * fig09_22.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 9.22: fig09_22.c
// Using an inverted scan set
#include <stdio.h>
#include "main.h"

void fig09_22()
{
	char z[ 9 ];

	printf( "%s", "Enter a string: \n" );
	scanf( "%8[^aeiou]", z );

	printf( "The input was \"%s\"\n", z );
}

