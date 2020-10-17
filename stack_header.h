#ifndef STACK_HEADER
#define STACK_HEADER
/* --------------------------------------------------------
 * header for a stack program
 * Axl Estevez
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

