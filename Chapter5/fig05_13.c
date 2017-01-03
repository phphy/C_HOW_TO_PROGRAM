/*
 * fig05_13.c
 *
 *  Created on: 2014Äê5ÔÂ19ÈÕ
 *      Author: open
 */
//Fig. 5.13: fig05_13.c
//Randomizing the die-rolling program.

#include <stdio.h>
#include <stdlib.h>

//function fig05_13 begins program execution
void fig05_13()
{
	unsigned int i;// counter
	unsigned int seed;// number used to seed the random number generator

	printf( "%s", "Enter seed: \n");
	scanf( "%u",&seed );// note %u for unsigned int

	srand( seed );// seed the random number generator

	//loop 10 times
	for ( i = 1; i <= 10; ++i ){

		//pick a random number from 1 to 6 and output it
		printf( "%10d", 1 + ( rand() % 6 ));

		//if counter is divisible by 5, begin a new line of output

		if ( i % 5 == 0) {
			puts( "" );
		}//end if
	}//end for
}//end fig05_13

