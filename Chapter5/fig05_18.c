/*
 * fig05_18.c
 *
 *  Created on: 2014Äê5ÔÂ19ÈÕ
 *      Author: open
 */
//Fig. 5.18: fig05_18.c
//Recursive factorial function.
#include <stdio.h>

unsigned long long int factorial( unsigned int number);

//function fig05_18 begins program execution
void fig05_18()
{
	unsigned int i;// counter

	//during each iteration, calculate factorial( i ) and display result
	for ( i = 0; i <= 21; ++i){
		printf( "%u! = %I64u\n", i, factorial( i ));
	}//end for

}//end fig05_18

//recursive definition of function factorial
unsigned long long int factorial( unsigned int number )
{
	//base case
	if ( number <= 1) {
		return 1;
	}//end if
	else { //recursive step
			return ( number * factorial( number - 1 ));
		}//end else
}// end function factorial

