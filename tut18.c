//if else statement
/*Syntax:
if(condition) {
	block 1 of statements
}else {
	block 2 of statements
}
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int number = 0;
	printf("\nEnter an Integer: ");
	scanf("%d", &number);

	if(number > 10) {
		printf("\nYou entered a number greater than 10\n", number);
	}else {
		printf("\nYou entered a number smaller than 10\n", number);
	}
	return 0;
}


