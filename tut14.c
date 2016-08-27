/*Type cast operator
cast operator can be usedto explicitly convert th value of an expression to a 
different data type.

Two types of cast:

-implicit cast
-explicit cast

implicit cast:
implicit type conversion, also known as coercion, is an automatic type conversion
by the compiler.

explicit cast:
explicit type conversion is a type conversion which is explicitly defined within a program (instead of being done by a compiler for implicit type converison).

#lower data type to higher data type are converted implicitly

#higher data type to lower data type are converted explicitly
*/

#include <stdio.h>

int main(int argc, char *argv) {
 	int i = 10;
	float f = 3.147;

	printf("The Integer is: %d\n", i);
	printf("The Float is: 	%f\n", f);

	//implicit conversion
	f = i;
	printf("Implicit conversion int to float: %f\n", f);

	//explicit conversion
	i = (int) f;
	printf("Eplicit conversion float to int: %d\n", i);

	return 0;
}

