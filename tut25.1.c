/*goto

- goto statement transfers the control to the label specified with the goto 
statement

- label is any name give to particular part in program

- label is followed with a colon (:)

Syntax:

label 1
-
-
goto label1

*/

#include <stdio.h>

int main(int argc, char * argv[]) {
	int i, j;

	for( i = 0; i < 10; i++) {
		printf("Outer loop executing. i = %d\n", i);

		for( j = 0; j < 3; j++) {
			printf("Inner loop executing. j = %d\n", j);
			if (i == 5) {
				goto stop;
			}
		}
	}
	//this message does not print
	printf("Loop exited. i = %d\n", i);

	stop:
		printf("Jumped to stop. i = %d\n", i);

	return 0;

}

