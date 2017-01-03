/*
 * fig04_12.c
 *
 *  Created on: 2014Äê5ÔÂ16ÈÕ
 *      Author: open
 */
//Fig. 4.12: fig04_12.c
//Using the continue statement in a for statement
#include <stdio.h>
#include "main.h"

//function fig04_12 begins program execution
void fig04_12()
{
	unsigned int x;//counter

	//loop 10 times
	for ( x = 1; x <= 10; ++x){

		//if x is 5,continue with next iteration of loop
		if ( x == 5){
			continue;// skip remaining code in loop body
		}//end if
		printf( "%u ", x );//display value of x
	}//end for

	puts( "\nUsed continue to skip printing the value 5.");
}//end function
