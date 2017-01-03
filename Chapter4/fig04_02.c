/*
 * fig04_02.c
 *
 *  Created on: 2014Äê5ÔÂ13ÈÕ
 *      Author: open
 */
//Fig. 4.2: fig04_02.c
//Counter-controlled repetition with the for statement
#include <stdio.h>
#include "main.h"

//function fig04_02 begins program execution
void fig04_02()
{
	unsigned int counter;//define counter
	//initialization,repetition condition,and increment are all included in the for statement header.
	for (counter = 1; counter <= 10; ++counter){
		printf("%u\n",counter);
	}//end for
}//end function

