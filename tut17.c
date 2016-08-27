//simple if statement
/*Syntax:
if(condition) {
	block of statements
}
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int number = 0;
	printf("\nEnter an Integer: ");
	scanf("%d", &number);

	if(number > 10) {
		printf("\nYou entered %d which is greater than 10\n", number);
	}

	if(number < 10) {
		printf("\nYou entered %d which is smaller than 10\n", number);
	}

	return 0;
}


