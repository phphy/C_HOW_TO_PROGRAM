/*
 * fig05_03.c
 *
 *  Created on: 2014Äê5ÔÂ16ÈÕ
 *      Author: open
 */
//Fig. 5.3: fig05_03.c
//Creating and using a programmer-defined function.
#include <stdio.h>
#include "main.h"

int square( int y);//function prototype

//function square begins program execution
void fig05_03()
{
	int x;//counter

	//loop 10 times and calculate and output square of x each time
	for ( x = 1; x <= 10; ++x){
		printf( "%d ", square( x ));
	}//end for
	puts( "" );
}//end fig05_03

//square function definition returns the square of its parameter
int square( int y )
{
	return y * y;//returns the square of y as an int
}// end function square
