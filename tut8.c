/*Arithmetic Operator
-Arythmetic operators are used for Arythmetic Calculation
-These are used to perform mathematical calculations like
addition (+), substraction (-), multiplication (*), division (/)
and modulus (remainder) (%).*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int num1, num2;	
	int add, subs, mul, div, mod;
	
	printf("\nEnter First Number: ");
	scanf("%d", &num1);

	printf("\nEnter Second Number: ");
        scanf("%d", &num2);

	// (+) operator
	add = num1 + num2;
	printf("\nAddition is: %d", add);

	// (-) operator
	subs = num1 - num2;
	printf("\nSubstraction is: %d", subs);

	// (*) operator
	mul = num1 * num2;
	printf("\nMultiplication is: %d", mul);

	// (/) operator
	div = num1 / num2;
	printf("\nDivision is: %d", div);

	// (%) operator
	mod = num1 % num2;
	printf("\nModulus is: %d\n", mod);
	
	return 0;
}

