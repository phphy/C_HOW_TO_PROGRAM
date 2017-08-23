// Fig. 12.13: fig12_13.c
// Operating and maintaining a queue
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

// self-referential structure
struct queueNode {
    char data; // define data as a char
    struct queueNode *nextPtr; // queueNode pointer
}; // end structure queueNode

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

// function prototypes
void printQueue( QueueNodePtr currentPtr );
int isQueueEmpty( QueueNodePtr headPtr );
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr );
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value );
void instructionsQueue( void );

// function fig12_13 begins program execution
void fig12_13() {
    QueueNodePtr headPtr = NULL; // initialize headPtr
    QueueNodePtr tailPtr = NULL; // initialize tailPtr
    unsigned int choice; // user's menu choice
    char item; // char input by user
    
    instructionsQueue(); // display the menu
    printf( "%s", "? " );
    scanf( "%u", &choice );
    
    // while user does not enter 3
    while ( choice !=3 ) {
        switch( choice ) {
            // enqueue value
            case 1:
                printf( "%s", "Enter a character: " );
                scanf( "\n%c", &item );
                enqueue( &headPtr, &tailPtr, item );
                printQueue( headPtr );
                break;
            // dequeue value
            case 2:
                // if queue is not empty
                if ( !isQueueEmpty( headPtr ) ) {
                    item = dequeue( &headPtr, &tailPtr );
                    printf( "%c has been dequeue.\n", item );
                } // end if
                printQueue( headPtr );
                break;
            default:
                puts( "Invalid choice.\n");
                instructionsQueue();
                break;
        } // end switch
        
        printf( "%s", "? " );
        scanf( "%u", &choice );
    } // end while
    
} // end function fig12_13

// display program instructions to user
void instructionsQueue( void ) {
    printf( "Enter your choice:\n"
            "       1 to add an item to the queue\n"
            "       2 to remove an item from the queue\n"
            "       3 to end\n" );
} // end function instructionsQueue

// insert a node in at queue tail
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value ) {
    QueueNodePtr newPtr; // pointer to new node
    
    newPtr = malloc( sizeof( QueueNode ) );
    
    if( newPtr != NULL ) { // is space available
        newPtr->data = value;
        newPtr->nextPtr = NULL;
        
        // if empty, insert node at head
        if ( isQueueEmpty( *headPtr ) ) {
            *headPtr = newPtr;
        } // end if
        else {
            ( *tailPtr )->nextPtr = newPtr;
        } // end else
        
        *tailPtr = newPtr;
    } // end if
    else {
        printf( "%c not inserted. No memory available.\n", value );
    } // end else
} // end function enqueue


// remove node from queue head
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr ) {
    
    char value; // node value
    QueueNodePtr tempPtr; // tempoaray node pointer
    
    value = ( *headPtr )->data;
    tempPtr = *headPtr;
    *headPtr = (*headPtr )->nextPtr;
    
    // if queue is empty
    if ( *headPtr == NULL ) {
        *tailPtr = NULL;
    } // end if
    
    free( tempPtr );
    return value;
} // end function dequeue

// retun 1 if the queue is empty, 0 otherwise
int isQueueEmpty( QueueNodePtr headPtr ) {
    return headPtr == NULL;
} // end function isQueueEmpty


// print the queue
void printQueue( QueueNodePtr currentPtr ) {
    
    // if queue is empty
    if ( currentPtr == NULL ) {
        puts( "Queue is empty.\n" );
    } // end if
    else {
        puts( "The queue is:");
        
        // while not end of queue
        while ( currentPtr != NULL ) {
            printf( "%c ----> ", currentPtr->data );
            currentPtr = currentPtr->nextPtr;
        } // end while
        
        puts( "NULL\n" );
    } // end else
} // end function printQueue
