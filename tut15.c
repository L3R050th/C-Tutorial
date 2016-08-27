/*Size of operator
C provides a compiler-time unary operator called sizeof that can be used to
compute the size of any object.

The expression such as:
-sizeof object
-sizeof(type name)
*/

#include <stdio.h>

int main(int argc, char *argv) {

	printf("size of int in byte: %d\n", sizeof(int));
        printf("size of char in byte: %d\n", sizeof(char));
        printf("size of float in byte: %d\n", sizeof(float));
	
	return 0;
}

