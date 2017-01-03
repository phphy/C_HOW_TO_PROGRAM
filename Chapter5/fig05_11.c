/*
 * fig05_11.c
 *
 *  Created on: 2014Äê5ÔÂ19ÈÕ
 *      Author: open
 */
//Fig. 5.11: fig05_11().c
//Shifted,scaled random integers produced by 1 + rand() % 6

#include <stdio.h>
#include <stdlib.h>

//function fig05_11 begins program execution
void fig05_11()
{
	unsigned int i;//counter

	//loop 20 times
	for ( i = 1; i <= 20; ++i){

		//pick random number from 1 to 6 and output it
		printf( "%10d", 1 + ( rand() % 6));

		//if counter is divisible by 5, begin new line of output
		if( i % 5 == 0){
			puts( "" );
		}//end if
	}//end for
}//end fig05_11

