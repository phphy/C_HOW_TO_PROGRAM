// Fig. 12.8: fig12_08.c
// A simple stack program
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

// self-referential structure
struct stackNode {
    int data; // define data as an int
    struct stackNode *nextPtr; // stackNode pointer
}; // end structure stackNode

typedef struct stackNode StackNode; // synonym for struct stackNode
typedef StackNode *StackNodePtr; // synonym fro StackNode*

// prototypes
void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr * topPtr );
int isEmptyStack( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructionsStack( void );

// function fig12_08 begings program execution
void fig12_08() {
    StackNodePtr stackPtr = NULL; // points to stack top
    unsigned int choice; // user's menu choice
    int value; // int input by user
    
    instructionsStack(); // display the menu
    printf( "%s", "? " );
    scanf( "%u", &choice );
    
    // while user does not enter 3
    while ( choice != 3 ) {
        switch ( choice ) {
            // push value onto stack
            case 1:
                printf( "%s", "Enter an integer: " );
                scanf( "%d", &value );
                push( &stackPtr, value );
                printStack( stackPtr );
                break;
            // pop value off stack
            case 2:
                if ( !isEmptyStack( stackPtr ) ) {
                    printf( "The popped value is %d.\n", pop( &stackPtr ) );
                } // end if
                
                printStack( stackPtr );
                break;
            default:
                puts( "Invalid choice.\n" );
                instructionsStack();
                break;
        } // end switch
        
        printf( "%s", "? " );
        scanf( "%u", &choice );
    } // end while
    
    puts( "End of run." );
} // end function fig12_08


// display program instructions to user
void instructionsStack( void ) {
    puts( "Enter choice:\n"
            "1 to push a value on the stack\n"
            "2 to pop a value off the stack\n"
            "3 to end program");
} // end function instructions

// insert a node at the stack too
void push( StackNodePtr *topPtr, int info ) {
    StackNodePtr newPtr; // pointer to new node
    
    newPtr = malloc( sizeof( StackNode ) );
    
    // insert the node at stack top
    if( newPtr != NULL){
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    } // end if
    else { // no space available
        printf( "%d no inserted. No memory available.\n", info );
    } // end else
} // end function push


// remove a node from the stack top
int pop( StackNodePtr *topPtr ) {
    StackNodePtr tempPtr; // emporary node pointer
    int popValue; // node value
    
    tempPtr = *topPtr;
    popValue = ( *topPtr )->data;
    *topPtr = ( *topPtr )->nextPtr;
    free( tempPtr );
    return popValue;
} // end function pop


// print the stack
void printStack( StackNodePtr currentPtr ) {
    // if stack is empty
    if ( currentPtr == NULL ) {
        puts( "The stack is empty.\n" );
    } // end if
    else {
        puts( "The stack is:" );
        
        // while not the end of the stack
        while ( currentPtr != NULL ) {
            printf( "%d ----> ", currentPtr->data );
            currentPtr = currentPtr->nextPtr;
        } // end while
        
        puts( "NULL\n" );
    } // end else
} // end function printStack

// return 1 if the stack is empty, 0 otherwise
int isEmptyStack( StackNodePtr topPtr ) {
    return topPtr ==NULL;
} // end function isEmpty