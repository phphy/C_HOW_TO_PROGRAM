/*
 * fig09_21.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 9.21: fig09_21.c
// Using a scan set
#include <stdio.h>
#include "main.h"

// function fig09_21 begins program execution
void fig09_21()
{
	char z[ 9 ]; // define array z

	printf( "%s", "Enter string: \n" );
	scanf( "%s[aeiou]", z ); // search for set of characters

	printf( "The input was \"%s\"\n", z );
}
