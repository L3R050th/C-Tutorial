//difference between local and global variables
#include <stdio.h>

//global variable declaration
int a = 20;

int main(int argc, char *argv[]) {

	//locale variable declaration
	int a = 10;
	printf("Value of a = %d\n", a);

	return 0;


//Variable a is locally as well as globally defined, but
//the local variable value will be preferred.
}


