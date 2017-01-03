/*
 * fig05_06.c
 *
 *  Created on: 2014Äê5ÔÂ19ÈÕ
 *      Author: open
 */
//Fig. 5.6: fig05_06.c
//Demonstrating the function call stack and stack frames using a function frame

#include <stdio.h>
#include "main.h"


extern int square( int y);//link to fig05_03's square function

void fig05_06()
{
	int a = 10;//value to square (local automatic variable in fig05_06)
	printf( "%d square: %d\n", a, square( a ));
}//end fig05_06

//return the square of an integer
//int square( int x )// x is a local variable
//{
//	return x * x;//calculate square an return result
//}//end function square
