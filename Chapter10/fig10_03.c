/*
 * fig10_03.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 10.3: fig10_03.c
// Card shuffling and dealing program using structure
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
	const char *face; // define pointer face
	const char *suit; // define pointer suit
}; // end structure card

typedef struct card Card; // new type name for structure card

// prototype
void fillDeck( Card * const wDeck, const char * wFce[], const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

void fig10_03()
{
	Card deck[ CARDS ]; // define array of Cards

	// initialize array of pointers
	const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
		"Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	// initialize array of pointers
	const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	srand( time( NULL ) ); // randomize

	fillDeck( deck, face, suit ); // load the deck with Cards
	shuffle( deck ); // put cards in random order
	deal( deck ); // deal all 52 Cards

} // end function fig10_03

// place string into Card structures
void fillDeck( Card * const wDeck, const char * wFace[], const char * wSuit[] )
{
	size_t i; // counter

	// loop through wDeck
	for ( i = 0; i < CARDS; ++i )
	{
		wDeck[ i ].face = wFace[ i % FACES ];
		wDeck[ i ].suit = wSuit[ i / FACES ];
	} // end for
} // end function fillDeck

// shuffle cards
void shuffle( Card * const wDeck )
{
	size_t i; // counter
	size_t j; // variable to hold random value between 0 - 51
	Card temp; // define temporary structure for swapping Cards

	// loop through wDeck randomly swapping Cards
	for ( i = 0; i < CARDS; ++i ) {
		j = rand() % CARDS;
		temp = wDeck[ i ];
		wDeck[ i ] = wDeck[ j ];
		wDeck[ j ] = temp;
	} // end for
} // end function shuffle

// deal cards
void deal( const Card * const wDeck )
{
	size_t i; // counter

	// loop through wDeck
	for( i = 0; i < CARDS; ++i ) {
		printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
				(( i + 1) % 4 ) ? "  " : "\n" );
	} // end for
} // end function deal
