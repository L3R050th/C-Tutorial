//while loop
/* while loop statement in C programming language repeatedly executes a target 
statement as long as a given condition is true

Syntax:

while(condition) {
	statement(s);
}

*/

#include <stdio.h>

int main( int argc, char *argv[]) {
	//local variable definition
	int a = 1;

	//while loop execution
	while(a < 5) {
		//loops comes inside this body, until condition is true
		printf("Value of a: %d\n", a);
		a++;
	}
	
	return 0;
}

