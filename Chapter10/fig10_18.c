/*
 * fig10_18.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 10.18: fig10_18.c
// Using an enumeration
#include <stdio.h>
#include "main.h"

// enumeration constants represent months of the year
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT,
	NOV, DEC
}; // end enumeration months

void fig10_18()
{
	enum months month; // can contain any of 12 months

	// initialize array of pointers
	const char *monthName[] = { " ", "January", "February", "March",
		"April", "May", "June", "July", "August", "September", "October",
		"November", "December" };

	// loop through months
	for ( month = JAN; month <= DEC; ++month ) {
		printf( "%2d%11s\n", month, monthName[ month ] );
	} // end for
} // end function fig10_18

