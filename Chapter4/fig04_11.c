/*
 * fig04_11.c
 *
 *  Created on: 2014Äê5ÔÂ16ÈÕ
 *      Author: open
 */
//Fig. 4.11: fig04_11.c
//Using the break statement in a for statement.

#include <stdio.h>
#include "main.h"

//function fig04_11 begins program execution
void fig04_11()
{
	unsigned int x;//counter

	//loop 10 times
	for ( x = 1; x <= 10; ++x){

		//if x is 5,terminate loop
		if ( x == 5){
			break;//break loop only if x is 5
		}//end if

		printf("%u ",x);//display value of x
	}//end for
	printf("\nBroke out of loop at x == %u\n",x);
}//end function fig04_11

