/*A do-while loop is similar to a while loop, except that a do-while loop is
guaranteed to execute at least one time. The conditional expression appears at the end on the loop, so the statement(s) in the loop execute once before the condition
is tested.

Syntax:

do {
	statement(s);
}while(condition);

*/

#include <stdio.h>

int main(int argc, char * argv[]) {
	//declared local operand (variable)
	int a = 1;

	//do while loop
	do {
		printf("value of a: %d\n", a);
		a = a + 1;
	}while(a < 5);

	return 0;
}


