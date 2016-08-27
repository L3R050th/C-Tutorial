//One more example where the condition is false

#include <stdio.h>

int main( int argc, char argv[]) {
	//declared local operand (variable)
	int a = 1;

	//here, Condition is false. a is not equal to zero
	do {
		printf("value of a: %d\n", a);
	} while( a == 0);

	return 0;
}

