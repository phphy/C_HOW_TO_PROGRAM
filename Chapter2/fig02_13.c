/*
 * fig02_13.c
 *
 *  Created on: 2014��3��13��
 *      Author: open
 */
//Fig. 2.13:fig02_13.c
//Using if statements,relational
//operator, and equality operators.

#include <stdio.h>

//function main begins program execution
int fig02_13()
{
	int num1;//first number to be read from user
	int num2;//second number to be read from user

	printf("Enter to integers,and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf("%d%d",&num1,&num2);//read two integers

	if(num1 == num2)
	{
		printf("%d is equal to %d\n",num1,num2);
	}//end if

	if(num1 != num2)
	{
		printf("%d is not equal to %d\n",num1,num2);
	}//end if

	if(num1 < num2)
	{
		printf("%d is less than %d\n",num1,num2);
	}//end if

	if(num1 > num2)
	{
		printf("%d is greater than %d\n",num1,num2);
	}//end if

	if(num1 <= num2)
	{
		printf("%d is less than or equal to %d",num1,num2);
	}//end if

	if(num1 >= num2)
	{
		printf("%d is more than or equal to %d",num1,num2);
	}//end if

	return 0;
}//end function main
