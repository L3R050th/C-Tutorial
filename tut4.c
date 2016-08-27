//local and global variables
#include <stdio.h>
int main(int argc, char *argv[]) {

	//locale variable declaration
	int x, y, z;
	//actual initialization
	x = 11;
	y = 34;
	z = y + x;

	printf("Value of x = %d, y = %d and z = %d\n", x, y, z);

	return 0;

/*Here the variables x, y, z are local variables. And the scope of these 
variables is within the main function. */
}

