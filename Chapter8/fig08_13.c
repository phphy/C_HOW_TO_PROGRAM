/*
 * fig08_13.c
 *
 *  Created on: 2014Äê8ÔÂ5ÈÕ
 *      Author: open
 */
// Fig. 8.13: fig08_13.c
// Using function sscanf

#include <stdio.h>
#include "main.h"

void fig08_13()
{
	char s[] = "31298 87.375"; // initialize array s
	int x; // x value to be input
	double y; // y value to be input

	sscanf( s, "%d%lf", &x,&y );
	printf( "%s\n%s%6d\n%s%8.3f\n",
			"The values stored in character array s are:",
			"integer:", x, "double:", y );
} // end function fig08_13

