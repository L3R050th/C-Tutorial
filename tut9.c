/*Relational Operator
Realtional Operators are used to compare the value of two variables.
Operators:
== Check value of 2 variables are equal
!= Check value of 2 variables are equal or not
>  Check if a variable is greater than 
>= Check if a variable is greater than or equal to
<  Check if a variable is less then
<= Check if a variable is less than or equal to
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int a = 21;
	int b = 10;
	int c;

	// == operator
	if(a == b) {
		printf("a is equal to b\n");
	}else {
		printf("a is not equal to b\n");
	}

	// < operator
	if(a < b) {
		printf("a is less than b\n");
	}else {
		printf("a is not less than b\n");
	}

	// > operator
	if(a > b) {
		printf("a is greater than b\n");
	}else {
		printf("a is not greater then b\n");
	}

	//lets change value of a and b
	a = 5;
	b = 20;

	// <= operator
	if( a <= b) {
		printf("a is either less or equal to b\n");
	}

	// >= operator
	if(b >= a) {
		printf("b is either greater than or equal to a\n");
	}

	return 0;
} 






