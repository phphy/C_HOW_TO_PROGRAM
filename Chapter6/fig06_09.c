/*
 * fig06_09.c
 *
 *  Created on: 2014Äê6ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 6.9: fig06_09.c
// Roll a six-sided die 6,000,000 times

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define SIZE 7

// function fig06_09 begins program execution
void fig06_09()
{
	size_t face; // random die value 1 - 6
	unsigned int roll; // roll counter 1 - 6,000,000
	unsigned int frequency[ SIZE ] = { 0 }; // clear counts

	srand( time( NULL ) ); // seed random number generator

	// roll die 6,000,000 times
	for ( roll = 1; roll <= 6000000; ++roll ) {
			face = 1 + rand() % 6;
			++frequency[ face ]; // replaces entire switch of Fig. 5.8
	} // end for

	printf( "%s%17s\n", "Face", "Frequency");

	// output frequency elements 1 - 6 in tabular format
	for ( face = 1; face < SIZE; ++face) {
		printf( "%4d%17d\n", face, frequency[ face ] );
	} // end for
} // end fig06_09

