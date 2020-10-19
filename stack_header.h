#ifndef STACK_HEADER
#define STACK_HEADER
/* --------------------------------------------------------
 * header for stack program
 * Axl Estevez
 * File - stack_header.h
 * --------------------------------------------------------
*/

// creation of data to use
typedef struct node typeNode;
typedef typeNode *pNode;
typedef typeNode *Stack;

// prototype of the fuctions
void push(Stack *, int);
int pop(Stack *);

#endif

