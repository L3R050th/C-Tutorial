//Data types "int" and "char"
#include <stdio.h>

int main(int argc, char *argv[]) {

	int k;
	int num;
	int sum;
	char mychar;

	printf("Hello, World\n");

	k = 24;
	num = 4;

	printf("Value of k = %d\n", k);
	printf("Value of num = %d\n", num);
	printf("Values of 2 Vars are %d and %d\n", k, num);

	printf("The sum of the 2 Vars is: %d\n", sum = k+num);
	mychar = 'C';
	printf("My char is %c\n", mychar);
	printf("My char is %d\n", mychar);

	return 0;
}
