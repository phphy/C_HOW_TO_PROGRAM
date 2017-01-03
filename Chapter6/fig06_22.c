/*
 * fig06_22.c
 *
 *  Created on: 2014Äê6ÔÂ24ÈÕ
 *      Author: open
 */
// Fig. 6.22: fig06_22.c
// Double-subscripted array manipulations.
#include <stdio.h>
#include "main.h"

#define STUDENTS 3
#define EXAMS 4

// function prototype
int minimum( int grades[][ EXAMS ], size_t pupils, size_t tests );
int maximum( int grades[][ EXAMS ], size_t pupils, size_t tests );
double average( const int setOfGrades[], size_t tests );
void printSubArray( int grades[][ EXAMS ], size_t pupils, size_t tests );

// function fig06_22 begins program execution
void fig06_22()
{
	size_t student; // student counter

	// initialize students grades for three students (rows)
	int studentGrades[ STUDENTS ][ EXAMS ] =
	{ { 77, 68, 86, 73 },
			{ 96, 87, 89, 78 },
			{ 70, 90, 86, 81 } };

	// output array studentsGrades
	puts( "The array is:" );
	printSubArray( studentGrades, STUDENTS, EXAMS );

	// determine smallest and largest grade values
	printf( "\n\nLowest grade: %d\nHighest grade: %d\n",
			minimum( studentGrades, STUDENTS, EXAMS ),
			maximum( studentGrades, STUDENTS, EXAMS ) );

	// calculate average grade for each student
	for ( student = 0; student < STUDENTS; ++student ) {
		printf( "The average grade for student %u is %.2f\n",
				 student, average( studentGrades[ student ], EXAMS) );
	} // end for

} // end fig06_22


// Find the minimum grade
int minimum( int grades[][ EXAMS ], size_t pupils, size_t tests )
{
	size_t i; // student counter
	size_t j; // exam counter
	int lowGrade = 100; // initialize to highest possible grade

	// loop through rows of grades
	for ( i = 0; i < pupils; ++i ) {

		// loop through columns of grades
		for ( j = 0; j < tests; ++j ) {

			if ( grades[ i ][ j ] < lowGrade ) {
				lowGrade = grades[ i ][ j ];
			} // end if
		} // end inner for
	} // end outer for

	return lowGrade; // return minimum grade

}

// Find the maximum grade
int maximum( int grades[][ EXAMS ], size_t pupils, size_t tests )
{
	size_t i; // student counter
	size_t j; // exam counter
	int highGrade = 0; // initialize to lowest possible grade

	// loop through rows of grades
	for ( i = 0; i < pupils; ++i ) {

		// loop through columns of grades
		for ( j = 0; j < tests; ++j ) {
			if ( grades[ i ][ j ] > highGrade ) {
				highGrade = grades[ i ][ j ];
			} // end if
		} // end inner for
	} // end outer for

	return highGrade; // return maximum grade
} // end function maximum

// Determine the average grade for a particular student
double average( const int setOfGrades[], size_t tests )
{
	size_t i; // exam counter
	int total = 0; // sum of test grades

	// total all grades for one student
	for ( i =0; i < tests; ++i ) {
		total += setOfGrades[ i ];
	} // end for

	return ( double ) total / tests; // average
} // end function average

// Print the array
void printSubArray( int grades[][ EXAMS ], size_t pupils, size_t tests )
{
	size_t i; // student counter
	size_t j; // exam counter

	// output column heads
	printf( "%s", "                [0]  [1]  [2]  [3]" );

	// output grades in tabular format
	for ( i = 0; i < pupils; ++i ) {

		// output label for row
		printf( "\nstudentGrades[%d] ", i );

		// output grades for one student
		for ( j = 0; j < tests; ++j ) {
			printf( "%-5d", grades[ i ][ j ] );
		} // end inner for
	} // end outer for
} // end function printSubArray
