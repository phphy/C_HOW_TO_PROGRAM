/*
 * fig04_01.c
 *
 *  Created on: 2014Äê5ÔÂ13ÈÕ
 *      Author: open
 */
//fig.4.1:fig04_01.c
//Counter-controlled repetitions

#include <stdio.h>
#include "main.h"

//function begins program execution

void fig04_01()
{
	unsigned int counter = 1;//initialization
	while (counter <= 10){//repetition condition
		printf("%u\n",counter);//display counter
		++counter;//increment
	}//end while
}//end function
