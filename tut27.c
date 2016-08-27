/*Declaring a function
A function declaration tells the compiler about a function name. The actual body
of the function can be defined seperatly.*/

#include <stdio.h>

int sum(int num1, int num2);

int main(int argc, char *argv[]) {
	//local variable definition
	int a = 10;
	int b = 20;
	int s;

	//calling a function to get the sum of the numbers
	s = sum(a, b);

	printf("Sum of the numbers is: %d\n", s);

	return 0;
}

//function returning the sum of the two numbers

	int sum(int num1, int num2) {
		//local variable declaration
		int result;

		result = num1 + num2;

		return result;
}

/*The function is declared first and then its defined. The main() calls the 
function sum() and passes two arguments so that the called function can perform
its defined task and return the result.*/


