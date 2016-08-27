//global variables
#include <stdio.h>

//global variable declaration

int z;

int main(int argc, char *argv[]) {

	//local variable declaration
	int x, y;

	//actual initialization
	x = 20;
	y = 22;
	z = x + y;

	printf("Value of x = %d, y = %d and z = %d\n");

	return 0;

//The Variable z is a global variable and it can be accessed by any function
}

