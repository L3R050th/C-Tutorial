//for loop

/*Loops are used to repeat a block of code

Syntax:

for(init; condition; increment) {
	//block of statements
}
*/

#include <stdio.h>

int main( int argc, char *argv[]) {
	int i;

	for(i = 0; i < 10; i++) {
		printf("%d ", i);
	}

	return 0;
}

/*
init - Initializes the variable at the beginning of the loop to some value. This
value is the starting point of the loop

condition - Decides whether the loop will continue running or not. While this 
condition is true, the loop will continue running.

increment - The part of the loop that changes the value of the variable created in
the variable declaration part of the loop. The increment statement is the part to 
the loop which will eventually stop the loop which will eventually stop the loop
from running.
*/


