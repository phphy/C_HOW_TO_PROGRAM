/*
 * fig09_05.c
 *
 *  Created on: 2014Äê8ÔÂ7ÈÕ
 *      Author: open
 */
// Fig. 9.5: fig09_05.c
// Using the character and string conversion specifiers
#include <stdio.h>
#include "main.h"

void fig09_05()
{
	char character = 'A'; // initialize char
	char string[] = "This is a string"; // initialize char array
	const char *stringPtr = "This is also a string"; // char pointer

	printf( "%c\n", character );
	printf( "%s\n", "This is a string" );
	printf( "%s\n", string );
	printf( "%s\n", stringPtr );
}

