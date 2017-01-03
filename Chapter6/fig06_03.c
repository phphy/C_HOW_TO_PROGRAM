/*
 * fig06_03.c
 *
 *  Created on: 2014Äê5ÔÂ20ÈÕ
 *      Author: open
 */
//Fig. 6.3: fig06_03.c
//Initializing the elements of an array to zeros.
#include <stdio.h>
#include "main.h"

//function fig06_03 begins program execution
void fig06_03()
{
	int n[ 10 ];// n is an array of 10 integers
	size_t i;// counter

	//initialize elements of array n to 0
	for ( i = 0; i < 10; ++i){
		n[ i ] = 0;// set element at location i to 0
	}//end for

	printf( "%s%13s\n", "Element", "Value" );

	// output contents of array n in tabular format
	for ( i = 0; i < 10; ++i )	{
		printf( "%7u%13d\n", i, n[ i ] );
	}//end for

}//end fig06_03
