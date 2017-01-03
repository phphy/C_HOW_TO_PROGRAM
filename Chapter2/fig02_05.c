/*
 * fig02_05.c
 *
 *  Created on: 2014Äê3ÔÂ14ÈÕ
 *      Author: open
 */
//
#include <stdio.h>

int fig02_05()
{

	int integer1;//first number to be entered by user
	int integer2;//second number to be entered by user
	int sum;//variable in which sum will be stored

	printf("Enter first integer\n");//prompt
	scanf("%d",&integer1);//read an integer

	printf("Enter second integer\n");//prompt
	scanf("%d",&integer2);//read an integer

	sum = integer1 + integer2;//assign total to sum

	printf("Sum is %d\n",sum);//print sum

	return 0;
}

