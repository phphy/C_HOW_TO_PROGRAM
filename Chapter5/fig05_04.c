/*
 * fig05_04.c
 *
 *  Created on: 2014Äê5ÔÂ16ÈÕ
 *      Author: open
 */
//Fig 5.4: fig05_04.c
//Find the maximum of three integers.

#include <stdio.h>
#include "main.h"

int maximum( int x, int y, int z);//function prototype

//function fig05_04 begins program execution
void fig05_04()
{
	int number1;// first integer entered by the user
	int number2;// second integer entered by the user
	int number3;// third integer entered by the user

	printf( "%s","Enter three integers:");
	scanf( "%d%d%d",&number1,&number2,&number3);

	//number1,number2,number3 are arguments to the maximum function call
	printf( "Maximum is:%d\n",maximum( number1, number2, number3 ) );

}//end fig05_04

//Function maximum difinition x, y and z are parameters
int maximum ( int x, int y, int z)
{
	int max = x;//assume x is largest

	if ( y > max ){//if y is larger than max,
		max = y;//assign y to max
	}//end if

	if ( z > max ){//if z is larger than max,
		max = z;//assign z to max
	}//end if

	return max;//max is largest value
}//end function maximum
