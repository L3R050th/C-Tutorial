/*Increment & Decrement Operators
-Increment operator (++) increases the value of its operand by 1
-Decrement operator (--) decreases the value of its operand by 1
*/

#include <stdio.h>

int main(int argc, char *argv) {

	int x, y;

	//increment operators
	x = 1;

	y = ++x;			//x is now 2, y is also 2
	printf("y is now: %d\n", y);
	printf("x is now: %d\n", x);

	y = x++;			//x is now 3, y is 2
	printf("y is now: %d\n", y);
	printf("x is now: %d\n", x);

	//Decrement operators

	x = 3;

	y = x--;			//x is now 2, y is 3
        printf("y is now: %d\n", y);
	printf("x is now: %d\n", x);

	y = --x;			//x is now 1 y is also 1
        printf("y is now: %d\n", y);
	printf("x is now: %d\n", x);

return 0;
}


