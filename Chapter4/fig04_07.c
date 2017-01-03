/*
 * fig04_07.c
 *
 *  Created on: 2014Äê5ÔÂ13ÈÕ
 *      Author: open
 */
//Fig. 4.7:fig04_07.c
//Counting letter grades with switch.
#include <stdio.h>
#include "main.h"

//function fig04_07 begins program execution
void fig04_07()
{
	int grade;//one grade
	unsigned int aCount = 0;// number of As
	unsigned int bCount = 0;// number of Bs
	unsigned int cCount = 0;// number of Cs
	unsigned int dCount = 0;// number of Ds
	unsigned int eCount = 0;// number of Es
	unsigned int fCount = 0;// number of Fs

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");

	//loop until user type end-of-file key sequence
	while (( grade = getchar()) != EOF){

		//determine which grade was input
		switch (grade){// switch nested in while
			case 'A'://grade was uppercase A
			case 'a'://or lowercase a
				++aCount;//increment aCount
				break;//necessary to exit switch

			case 'B'://grade was uppercase B
			case 'b'://or lowercase b
				++bCount;//increment bCount
				break;//necessary to exit switch

			case 'C'://grade was uppercase C
			case 'c'://or lowercase c
				++cCount;//increment cCount
				break;//necessary to exit switch

			case 'D'://grade was uppercase D
			case 'd'://or lowercase d
				++dCount;//increment dCount
				break;//necessary to exit switch

			case 'E'://grade was uppercase E
			case 'e'://or lowercase e
				++eCount;//increment eCount
				break;//necessary to exit switch

			case 'F'://grade was uppercase F
			case 'f'://or lowercase f
				++fCount;//increment fCount
				break;//necessary to exit switch

			case '\n':// ignore newlines,
			case '\t'://tabs
			case ' ':// and spaces in input
				break;//exit switch

			default:
				printf("%s","Incorrect letter grade entered.");
				puts("Enter a new grade.");
				break;//optional;will exit switch anyway
		}//end switch
	}//end while

	//output summary of results
	puts("\nTotals for each letter grade are:");
	printf("A: %u\n",aCount);// display number of A grades
	printf("B: %u\n",bCount);// display number of B grades
	printf("C: %u\n",cCount);// display number of C grades
	printf("D: %u\n",dCount);// display number of D grades
	printf("E: %u\n",eCount);// display number of E grades
	printf("F: %u\n",fCount);// display number of F grades
}//end function fig04_07

