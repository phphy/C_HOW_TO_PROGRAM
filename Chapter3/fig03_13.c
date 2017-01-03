/*
 * fig03_13.c
 *
 *  Created on: 2014Äê3ÔÂ17ÈÕ
 *      Author: open
 */
//fig. 3.13: fig03_13.c
//PRE incrementing and post incrementing
#include <stdio.h>

//function main begins program execution
void fig03_13()
{
	int c;//define variable


	//demonstrate post increment
	c = 5;//assign 5 to c
	printf("%d\n",c);//print 5
	printf("%d\n",c++);//print 5 then post increment
	printf("%d\n\n", c);//print 6

	//demonstrate PRE increment
	c = 5;//assign 5 to c
	printf("%d\n",c);//print 5
	printf("%d\n",++c);//PRE increment then print 6
	printf("%d\n",c);//print 6
}//end function fig03_13

