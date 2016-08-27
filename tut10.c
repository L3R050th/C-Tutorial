/*Logical Operators
Logical Operator are used to perform logical operations on the given two variables.

Logical Operators:

&& expr1 && expr2   (both need to be true for the true case)
|| expr1 || expr2   (at least one of them need to be true for the true case)
!  !expr1           (if expr1 true the result will be false and reversed
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 5;
	int b = 10;
	
	if((a == 5) && (b < 5)) {
		printf("true\n");
	}else{ 
		printf("false\n");
	}

	if((a != 5) && (b < 5)) {
                printf("true\n");
        }else{
                printf("false\n");
	}

	if((a == 5) || (b >= 5)) {
                printf("true\n");
        }else{
                printf("false\n");
	}
 	
	if((a != 5) || (b <= 10)) {
                printf("true\n");
        }else{
                printf("false\n");
	}

	return 0;
}



