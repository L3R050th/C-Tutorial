/*Function Parameter
There are two types of arguments/parameters

1. Actual Parameters
2. Formal Parameters

Actual parameters:

Are parameters that appear in function calls.

Syntax:
Function_name(actual parameters)

Formal parameters:
Are parameters that appear in function declarations.

Syntax:
return_type function_name(formal parameters)
*/

#include <stdio.h>


//function declaration
int sum(int num1, int num2);

int main(int argc, char *argv[]) {
	//local variable declaration
	int a = 10;
	int b = 20;
	int s;

	//calling a function to get the sum of the numbers
	s = sum(a, b); 	//actual parameter

	printf("Sum of the numbers is: %d\n", s);

	return 0;
}

//function returning the sum of the two numbers

int sum(int num1, int num2) { 	//Formal parameter
	//local variable declaration
	int result;
	result = num1 + num2;
	return result;
}

/*In calling function - sum(a, b) and b are actual parameters.
And parameters in function definition - int sum(int num1, int num2) and num2 are
formal parameters

Note:

#Formal parameters are always variables

#Actual parameters need not have to be variables. You can use variables, numbers,
expressions, or even functions calls as actual parameters.
*/

	
