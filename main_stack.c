#include <stdio.h>
#include <stdlib.h>
#include "stack_header.h"

/* run this program using the console pauser or add your 
own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack stack = NULL;
	int i;
	for(i = 1; i <= 10; i++){
		push(&stack, i);
	}
	printf("%d\n",pop(&stack) );
	return 0;
}
