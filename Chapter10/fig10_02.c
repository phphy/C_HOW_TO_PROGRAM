/*
 * fig10_02.c
 *
 *  Created on: 2014Äê8ÔÂ12ÈÕ
 *      Author: open
 */
// Fig. 10.2: fig10_02.c
// Structure member operator and structure pointer operator
#include <stdio.h>
#include "main.h"

// card structure definition
struct card {
	char *face; // define pointer face
	char *suit; // define pointer suit
}; // end structure card

void fig10_02()
{
	struct card aCard; // define one structure car variable
	struct card *cardPtr; // define a pointer to a structure card

	// place string into aCard
	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard; // assign address of aCard to cardPtr

	printf( "%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
			cardPtr->face, " of ", cardPtr->suit,
			( *cardPtr ).face, " of ", ( *cardPtr ).suit );
}

