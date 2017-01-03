/*
 * fig09_24.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 9.24: fig09_24.c
// Reading and discarding characters from the input stream
#include <stdio.h>
#include "main.h"

void fig09_24()
{
	int month1;
	int day1;
	int year1;
	int month2;
	int day2;
	int year2;

	printf( "%s", "Enter a date in the form mm-dd-yyyy: \n" );
	scanf( "%d%*c%d%*c%d", &month1, &day1, &year1 );

	printf( "month = %d  day = %d  year = %d\n\n", month1, day1, year1 );

	printf( "%s", "Enter a date in the form mm/dd/yyyy: \n" );
	scanf( "%d%*c%d%*c%d", &month2, &day2, &year2 );

	printf( "month = %d  day = %d  year = %d\n\n", month2, day2, year2 );
}

