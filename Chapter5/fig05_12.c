/*
 * fig05_12.c
 *
 *  Created on: 2014Äê5ÔÂ19ÈÕ
 *      Author: open
 */
//Fig. 5.12: fig05_12.c
//Rolling a six-sided die 6,000,000 times

#include <stdio.h>
#include <stdlib.h>

//function fig05_12 begins program execution
void fig05_12()
{
	unsigned int frequency1 = 0;// rolled 1 counter
	unsigned int frequency2 = 0;// rolled 2 counter
	unsigned int frequency3 = 0;// rolled 3 counter
	unsigned int frequency4 = 0;// rolled 4 counter
	unsigned int frequency5 = 0;// rolled 5 counter
	unsigned int frequency6 = 0;// rolled 6 counter

	unsigned int roll;// roll counter, value 1 to 6000000
	int face;// represents one roll of the die, value 1 to 6
	//loop 6000000 times and summarize results
	for ( roll = 1; roll <= 6000000; ++roll){
		face = 1 + rand() % 6;// random number 1 to 6

		switch (face){

			case 1:// rolled 1
				++frequency1;
				break;

			case 2:// rolled 2
				++frequency2;
				break;

			case 3:// rolled 3
				++frequency3;
				break;

			case 4:// rolled 4
				++frequency4;
				break;

			case 5:// rolled 5
				++frequency5;
				break;

			case 6:// rolled 6
				++frequency6;
				break;//optional
		}//end switch
	}//end for

	//display results i tabular format
	printf( "%s%13s\n","Face","Frequency");
	printf( "   1%13u\n", frequency1 );
	printf( "   2%13u\n", frequency2 );
	printf( "   3%13u\n", frequency3 );
	printf( "   4%13u\n", frequency4 );
	printf( "   5%13u\n", frequency5 );
	printf( "   6%13u\n", frequency6 );

}//end fig05_12
