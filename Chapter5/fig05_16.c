/*
 * fig05_16.c
 *
 *  Created on: 2014��5��19��
 *      Author: open
 */
//Fig. 5.16: fig05_16.c
//Scoping
#include <stdio.h>

void useLocal( void );// function prototype
void useStaticLocal( void );// function prototype
void useGlobal( void );// function prototype

int x = 1;//global variable

void fig05_16()
{
	int x = 5;// local variable to fig05_16

	printf( "local x in outer scope of fig05_16 is %d\n", x );

	{ // start new scope
		int x = 7;//local variable to new scope

		printf( "local x in inner scope of fig05_16 is %d\n", x );
	}//end new scope

	printf( "local x in outer scope of fig05_16 is %d\n", x );

	useLocal();//useLocal has automatic local x
	useStaticLocal();// useStaticLocal has static local x
	useGlobal();// useGlobal use global x
	useLocal();// useLocal reinitialize automatic local x
	useStaticLocal();// static local x retains its prior value
	useGlobal();// global x also retains its value

	printf( "\nlocal x in fig05_16 is %d\n", x );
}//end fig05_16

//useLocal reinitialize local variable x during each call
void useLocal( void )
{
	int x = 25;// initialized each time useLocal is called

	printf( "\nlocal x in useLocal is %d after entering useLocal\n", x );
	++x;
	printf( "\nlocal x in useLocal is %d before exiting useLocal\n", x );
}//end useLocal

//useStatic initializes static local variable x only the first time
//the function is called; value of x is saved between calls to this function
void useStaticLocal( void )
{
	// initialized once before program startup
	static int x = 50;

	printf( "\nlocal static x is %d on entering useStaticLocal\n", x );
	++x;
	printf( "\nlocal static x is %d on exiting useStaticLocal\n", x );
}//end useStaticLocal

//function useGlobal modifies global variable x during each call
void useGlobal( void )
{
	printf( "\nglobal x is %d on entering useGlobal\n", x );
	x *= 10;
	printf( "\nglobal x is %d on exiting useGlobal\n", x );
}//end function useGlobal
