/*
 * fig08_16.c
 *
 *  Created on: 2014��8��5��
 *      Author: open
 */
#include <stdio.h>
#include <string.h>
#include "main.h"

void fig08_16()
{
	char s1[ 20 ] = "Happy "; // initialize char array s1
	char s2[] = "New Year "; // initialize char array s2
	char s3[ 40 ] = ""; // initialize char array s3 to empty

	printf( "s1 = %s\ns2 = %s\n", s1, s2 );

	// concatenate s2 to s1
	printf( "strcat( s1, s2 ) = %s\n", strcat( s1, s2 ) );

	// concatenate first 6 characters of s1 to s3. Place '\0'
	// after last character
	printf( "strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ) );

	// concatenate s1 to s3
	printf( "strcat( s3, s1 ) = %s\n", strcat( s3, s1 ) );
}

