#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"

/* --------------------------------------------------------
 * file: functions_stack.c
 * Description: developing functions for the basic operations 
   of a stack.
 * Author: Axl Estevez
 * --------------------------------------------------------
*/

// Struct to save data
struct node{
	struct node *next;
	int _value;
};

/* --------------------------------------------------------
 * Function : push.
 * Description: add an element to the end of the stack
 * arguments: *Stack (Stack) , stack reference, value(int),
   node value.
 * return: nothing.
 * --------------------------------------------------------
*/
void push(Stack *stack, int value){
	pNode _new;
	// Make a new node
	_new = (pNode)malloc(sizeof(typeNode));
	_new->_value = value;
	// the node is added to the stack.
	_new->next = *stack;
	// now, the start of the stack is the new node.
	*stack = _new;
}
/* --------------------------------------------------------
 * function: pop.
 * Description: Read and remove an item from the bottom of 
   the stack.
 * arguments: *stack(Stack), stack reference.
 * return: the value of the node.
 * --------------------------------------------------------
*/
int pop(Stack *stack){
	pNode aux; // auxiliary variable to manipulate node.
	int v; // auxiliary variable for return.
	
	// the node point to the first item of the stack.
	aux = *stack;
	if(!aux) return 0; // if no nodes in the list, return 0
	// allocate the entire stack minus the first item
	*stack = aux->next;
	// save the value of return
	v = aux->_value;
	// delete the node
	free(aux);
	return v;
}
