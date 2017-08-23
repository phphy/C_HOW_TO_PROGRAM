/* 
 * File:   main.c
 * Author: gwguokeqiang
 *
 * Created on 2014年12月22日, 上午9:11
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/*
 * 
 */
int main(int argc, char *argv[ ] ) {
    
    // link to function fig14_02
    // fig14_02();
    
    FILE *inFilePtr; // input file pointer
    FILE *outFilePtr; // output file pointer
    int c; // define c to hold character read from the source file
    int int1 = 1;
    int int2 = 2;
    
    // check number of command-line arguments
    if ( argc != 3 ) {
        puts( "Usage: mycopy infile outfile" );
    } // end if
    else {
        // if input file can be opened
        if ( ( inFilePtr = fopen( argv[ int1 ], "r" ) ) != NULL ) {
            // if output file can be opened
            if ( ( outFilePtr = fopen( argv[ int2 ], "w" ) ) != NULL )  {
                // read and output characters
                while ( ( c = fgetc( inFilePtr ) ) != EOF ) {
                    fputc( c, outFilePtr );
                } // end while
                
                fclose( outFilePtr ); // close the output file
            } // end if
            else { // output file could not be opened
                printf( "File \"%s\" could not be opened\n", argv[ int2 ] );
            } // end else
            
            fclose( inFilePtr ); // close the input file
        } // end if
        else { // input file could not be opened
            printf( "File \"%s\" could not be opened\n", argv[ int1 ] );
        } // end else
    } // end else
    
    return (EXIT_SUCCESS);
}

