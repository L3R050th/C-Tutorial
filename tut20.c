/*You can combine multiple if / if-else / if-else-if ladders when a series of 
decisions are involved. So you can make shure that your program executes certain
instructions when a series of conditions are met.

Some use-case:

1.
if(condition) {
	block of statements
	
	if(condition) {
		block of statements
	}
}

2.
if(condition) {
	block of statements
	}else {
		if(condition) {
			block of statements
		} else {
			block of statements
		}
	}

3.
if(condition) {
	block of statements
	}else if(condition) {
		if(condition) {
			block of statements
		}else {
			block of statements
		}
	}

*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int numb1, numb2;
	printf("Enter two integers: ");
	scanf("%d %d", &numb1, &numb2);

	//checking whether two integers are equal
	if(numb1 == numb2) {
		printf("\nResult: %d = %d", numb1, numb2);
	}else {
		//checking whether numb1 is greater than numb2
		if(numb1 > numb2) {
			printf("Result: %d > %d", numb1, numb2);
		}else {
			printf("Result: %d < %d", numb1, numb2);  				   }
	}

	return 0;
}





















