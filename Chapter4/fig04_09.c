/*
 * fig04_09.c
 *
 *  Created on: 2014Äê5ÔÂ16ÈÕ
 *      Author: open
 */
//Fig. 4.9: fig04_09.c
//Using the do...while repetition statement

#include <stdio.h>
#include "main.h"

//function fig04_09 begins program execution
void fig04_09()
{
	unsigned int counter = 1;//initialize counter

	do{
		printf("%u ",counter);//dispaly counter

	}while (++counter <= 10);//end do...while
	printf("\n");
}//end function fig04_09

