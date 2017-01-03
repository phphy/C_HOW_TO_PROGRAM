/*
 * fig11_11.c
 *
 *  Created on: 2014Äê12ÔÂ1ÈÕ
 *      Author: open
 */
// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>
#include "main.h"

// clientData structure definition
struct clientData {
	unsigned int accNum; // account number
	char lastName[ 15 ]; // account last name
	char firstName[ 10 ]; // account first name
	double balance; // account balance
}; // end structure clientData

void fig11_11() {
	FILE *cfPtr; // credit.dat file pointer

	// create clientData with default information
	struct clientData client = { 0, "", "", 0.0 };

	// fopen opens the file; exits if file cannot be opened
	if ( ( cfPtr = fopen( "credit.dat","rb+" ) ) == NULL ) {
		puts( "File could not be opened." );
	} // end if
	else {
		// require user to specify account number
		printf( "%s", "Enter account number ( 1 to 100, 0 to end input )\n" );
		scanf( "%d", &client.accNum );

		// user enters information, which is copied into file
		while ( client.accNum != 0 ) {
			// user enters last name, first name and balance
			printf( "%s", "Enter lastname, firstname, balance\n?" );

			// set record lastName, firstName and balance value
			fscanf( stdin, "%14s%9s%lf", client.lastName, client.firstName, &client.balance);

			// seek position in file to user-specified record
			fseek( cfPtr, ( client.accNum - 1 ) * sizeof( struct clientData ), SEEK_SET );

			// write user-specified information in file
			fwrite( &client, sizeof( struct clientData ), 1, cfPtr );

			// enable user to input another account number
			printf( "%s", "Enter account number\n? " );
			scanf( "%d", &client.accNum );
		} // end while

		fclose( cfPtr ); // fclose closes the file
	} // end else
} // end function fig11_11

