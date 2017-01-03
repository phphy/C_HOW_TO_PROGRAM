/*
 * fig11_07.c
 *
 *  Created on: 2014Äê8ÔÂ13ÈÕ
 *      Author: open
 */
// Fig. 11.7: fig11_07.c
// Credit inquiry program
#include <stdio.h>
#include "main.h"

// function main begins program execution
void fig11_07()
{
	unsigned int request = 0; // request number
	unsigned int account; // account number
	double balance; // account balance
	char name[ 30 ]; // account name
	FILE *cfPtr; // clients.dat file pointer

	// fopen opens the file; exits program if file cannot be opened
	if ( ( cfPtr = fopen( "clients.dat", "r" ) ) == NULL ) {
		puts( "File could not be opened" );
	} // end if
	else { // display request options
		printf( "%s", "Enter request\n"
				" 1 - List accounts with zero balance\n"
				" 2 - List accounts with credit balance\n"
				" 3 - List accounts with debit balance\n"
				" 4 - End of run\n? " );
		scanf( "%u", &request );

		// process user's request
		while ( request != 4) {

			// read account, name and balance from file
			fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );

			switch ( request ) {
			case 1:
				puts( "\nAccount with zero balance:" );

				// read file contents (until eof)
				while ( !feof( cfPtr ) ) {
					if ( balance == 0 ) {
						printf( "%-10d%-13s%7.2f\n", account, name, balance );
					} // end if

					// read account, name and balance from file
					fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );
				} // end while

				break;
			case 2:
				puts( "\nAccounts with credit balance:\n" );

				// read file contents (until eof)
				while ( !feof( cfPtr ) ) {

					if ( balance < 0 ) {
						printf( "%-10d%-13s%7.2f\n", account, name, balance );
					} // end if

					// read account, name and balance
					fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );
				} // end while

				break;

			case 3:
				puts( "\nAccounts with debit balance:\n" );

				// read file contents (until eof)
				while ( !feof( cfPtr ) ) {

					if ( balance > 0 ) {
						printf( "%-10d%-13s%7.2f\n", account, name, balance );
					} // end if

					// read account, name and balance from file
					fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );
				} // end while

				break;
			} // end switch

			rewind( cfPtr ); // return cfPtr to begining of file

			printf( "%s", "\n? " );
			scanf( "%d", &request );
		} // end while

		puts( "End of run." );
		fclose( cfPtr ); // fclose closes the file
	} // end else
} // end function fig11_07

