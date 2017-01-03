/*
 * fig03_06.c
 *
 *  Created on: 2014Äê3ÔÂ17ÈÕ
 *      Author: open
 */
//fig. 3.6: fig03_06.c
//Class average program with counter-controlled repetition.
#include <stdio.h>
//function main begins program execution
void fig03_06()
{
	unsigned int counter;// number of grade to be entered next
	int grade;//grade value
	int total;//sum of grades entered by user
	int average;//average of grades

	//initialization phase
	total = 0;//initialization total
	counter = 1;//initialization loop counter

	//processing phase
	while (counter <= 10)//loop 10 times
	{
		printf("%s","Enter grade: ");//prompt for input
		scanf("%d",&grade);//read grade from user
		total = total + grade;//add grade to total
		counter = counter +1;//increment counter
	}//end while

	//termination phase
	average = total / 10;//integer division

	printf("Class average is %d\n",average);//display result


}//end function main



