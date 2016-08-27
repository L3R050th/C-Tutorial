//switch
/* switch statements are also used when we need our program to make a certain
decision based on a condition and then execute accordingly.

Syntax:
switch(<variable>) {
	case a-constant-expression :
		//Code to execute if <variable> == a-constant-expression
		break;

	case b-constant expression :
                //Code to execute if <variable> == b-constant-expression
		break;
	.
	.
	.
	case n-constant-expression :
                //Code to execute if <variable> == n-constant-expression
		break;

	default :
		//Code to execute if <variable> does not equal the value
		//following any of the cases
	}


*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int input;

	printf("1. Play game\n");
	printf("2. Load game\n");
	printf("3. Play multi-player\n");
	printf("4. Exit\n");
	printf("Selection: ");
	scanf("%d", &input);
	printf("\n");

	switch(input) {
		case 1: //Note the colon not a semicolon
			printf("Play game called");
			break;
		case 2:
			printf("Load game called");
			break;
		case 3:
			printf("Play multi-player game called");
			break;
		case 4:
			printf("Thanks for playing!\n");
			break;
		default:
			printf("Bad input, quitting!\n");
			break;
		}
	return 0;
}

/* Important points

#the default case is optional

#case constant -expression can be int or char (no other datatypes are allowed)

*/












 			



		







