/*C Shorthand
C has special shorthand that simplifies coding of certain type of assignment.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 6;
	a += 2; 	//a = a + 2
	printf("a = %d\n", a);
	a -= 2;		//a = a - 2
        printf("a = %d\n", a);
	a *= 2;		//a = a * 2
        printf("a = %d\n", a);
	a /= 2;		//a = a / 2
        printf("a = %d\n", a);
	a %= 2;		//a = a % 2
        printf("a = %d\n", a);

	return 0;
}


