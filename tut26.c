/*Functions
A function is a block of statements, which is used to perform a specific task.
A C Programm has at least one function named main().

Types of functions:
There are two types of functions in C

1. Libary functions
2. User defined functions

Libary function:

libary functions are the built-in function in C such as puts(), gets(), printf(),
scanf() etc. These are the functions which already have a definition in header
files.

User defined function:

C allows programmer to define their own function according to their requirement.

Syntax of function:

return_type function_name (argument list) {
	Block of code
}

return_type: return types are the type of data that is returned by the function.
If nothing is returned by the function. If nothing is returned then the return typeis void.

argurment list: argumented list contains variables names along with their data
types. These arguments are inputs for the function.

Syntax:
#include <stdio.h>

void function_name() {
	//code
}

int main(int argc, char * argv[]) {
	//Calling function
	function_name();
}
*/

#include <stdio.h>
/*function return type is void and doesn't have parameters */

void demo() {
	printf("Hello World");
}

int main(int argc, char * argv[]) {
	//calling function
	demo();
	return 0;
}

/*Explanation:
demo() is a user defined function, and in main(), demo() function is called so thatit can perform its task.
*/
















