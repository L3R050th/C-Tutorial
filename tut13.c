/*Conditional/Ternary Operator
A ternary operator is some operation operating on three inputs. Its a shortcut
for an if-else statement, and is also known as conditional operator.

Syntax:
(condition) ? expression1 : expression2

If condition is true expression1 is evaluated else expression2 is evaluated.
Expression1/Expression2 can also be further conditional expression.
*/

#include <stdio.h>

int main() {

	int a = 5;
	char c;

	//Example 1
	//condition ? expression1 : expression2
	c = (a < 10) ? 'S' : 'L';	//if(a < 10), then c = S else c = L
	printf("C = %c", c);

	//Example 2
	//condition ? (condition ? expression1 : expression2) : expression2
	//if(a < 10) then check on more conditions if(a < 5), then c = s
	//else l, else c = L.
	c = (a < 10) ? ((a < 5) ? 's' : 'l') : ('L');
	printf("\nC = %c", c);

	return 0;
}



