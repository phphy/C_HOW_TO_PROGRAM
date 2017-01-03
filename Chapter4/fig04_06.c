/*
 * fig04_06.c
 *
 *  Created on: 2014Äê5ÔÂ13ÈÕ
 *      Author: open
 */
//Fig. 4.6: fig04_06.c
//Calculating compound interest
#include <stdio.h>
#include <math.h>
#include "main.h"

//function fig04_06 begins execution
void fig04_06()
{
	double amount;//amount on deposit
	double principal = 1000;//starting principal
	double rate = .05;//annual interest rate
	unsigned int year;//year counter

	//output table column heads
	printf("%4s%21s\n","Year","Amount on deposit");

	//calculate amount on deposit for each of ten years
	for( year = 1; year <= 10; ++year ){

		//calculate new amount for specified year
		amount = principal * pow(1.0 + rate, year);

		//output one table row

		printf("%4u%21.2f\n", year, amount);
	}//end for
}//end function

