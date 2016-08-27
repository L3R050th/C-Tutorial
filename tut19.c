//else if statement
/*Syntax:
if(condition_2) {
	block 1 statement;
} else if(condition_2) {
	block 2 statement;
} else if (condition_n) {
	block n statement;
} else {
	bock x statement;
}
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int mark;
	printf("Enter total marks of students (1 - 100): ");
	scanf("%d", &mark);

	if(mark <= 50) {
		printf("\nGrade D");
	}else if(mark <= 60) {
		printf("\nGrade C");
	}else if(mark <= 70) {
		printf("\nGrade B");
	}else {
		printf("\nGrade A");
	}

	return 0;
}

