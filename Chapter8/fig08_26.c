/*
 * fig08_26.c
 *
 *  Created on: 2014Äê8ÔÂ6ÈÕ
 *      Author: open
 */
// Fig. 8.26: fig08_26.c
// Using function strtok
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_26()
{
	// initialize array string
	char string[] = "This is a sentence with 7 tokens";
	char *tokenPtr; // create char pointer

	printf( "%s\n%s\n\n%s\n",
			"The string to be tokenized is:", string,
			"The tokens are:" );

	tokenPtr = strtok( string, " " ); // begin tokenizing sentence

	// continue tokenizing sentence until tokenPtr becomes NULL
	while ( tokenPtr != NULL ) {
		printf( "%s\n", tokenPtr );
		tokenPtr = strtok( NULL, " " ); // get next token
	} // end while
} // end function fig08_26

