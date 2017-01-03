/*
 * fig05_19.c
 *
 *  Created on: 2014Äê5ÔÂ20ÈÕ
 *      Author: open
 */
//Fig. 5.19: fig05_19.c
//Recursive fibonacci function
#include <stdio.h>

unsigned long long int fibonacci( unsigned int n);// function prototype

//function fig05_19 begins program execution
void fig05_19()
{
	unsigned long long int result;// fibonacci value
	unsigned int number;// number input by user

	//obtain integer from user
	printf( "%s", "Enter an integer: \n");
	scanf( "%u", &number);

	//calculate fibonacci value for number input by user
	result = fibonacci( number );

	//display result
	printf( "Fibonacci( %u ) = %I64u\n", number, result );
}//end fig05_19

//recursive definition of function fibonacci
unsigned long long fibonacci( unsigned int n)
{
	//base case
	if ( 0 == n || 1 == n){
		return n;
	}//end if
	else { //recursive step
		return fibonacci( n - 1 ) + fibonacci( n - 2 );
	}// end else
}// end function fibonacci
