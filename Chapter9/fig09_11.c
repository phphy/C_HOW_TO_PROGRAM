/*
 * fig09_11.c
 *
 *  Created on: 2014Äê8ÔÂ11ÈÕ
 *      Author: open
 */
// Fig. 9.11: fig09_11.c
// Right justifying and left justifying values
#include <stdio.h>
#include "main.h"

void fig09_11()
{
	printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
	printf( "%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23 );
} // end function fig09_11
