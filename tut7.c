//How to declare a constant variable?
/*Syntax for declaring a constant variable
data type const vaiable_name = value; */

#include <stdio.h>

int main(int argc, char *argv[]) {

	//float constant
	float const pi = 3.14;

	//integer constant
	int const a = 5;

	//character constant
	const char yes = 'y';

	printf("const pi = %f, const a = %d and const yes = %c\n", pi, a, yes);

	return 0;
}
//A constant variable is an identifier with an associated value which cannot 
//be altered by the program during execution.

