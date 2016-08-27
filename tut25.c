/* break, continue and goto
break keyword
break statement neglect the statement after it and exit compound statement in the  loop and transfer the control outside the loop. 

Break its sole purpose to passes control out of the compound statement i.e. Loop,
Condition, Method or Procedures.

while(a) {
	while(b) {
		if( b == 10  ) {
			break;
		}
	}
	//break will bring us here
}


continue keyword

Similar to break statement, continue statement also neglect the statement after it
in the loop and send control back to starting point of loop for next iteration 
instead of the outside loop.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 10;
	while(a < 20) {
		if(a == 15) {
			//skip the iteration
			a = a + 1;
			continue;
		}
		printf("value of a: %d\n", a);
		a++;
	}
	return 0;
}

