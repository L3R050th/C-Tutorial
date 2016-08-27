/*Pointer
A Pointer is a variable that points to an adress of a value.
Symbols used in pointer:
& (ampersand sign): 'Adress of operator'. It determines the adress of a variable.
* (asterisk sign): Indirection operator / value at adress. Adresses the value at 
the adress.

Example
int i = 3;

This declaration tells the C compiler tp:-

+Reserve space in memory to hold the integer value.
+Associate the name i with this memory.
+Store the value 3 at this location.

We may represent the location of i in the memory by:-

     i    ------> location name
 |   3  | ------> value at location
  65524   ------> location number

+The compiler has selected memory location 65524 as the place to store the value 3.

+The location number 65524 is not a number to be relied upon, because in some other
time the computer may choose a different location for storing the value 3.

+The important point is, i's adress in memory is a number.
*/

#include <stdio.h>

int main(int argc, char * argv[]) {
	int i = 3;
	printf("\nAdress of i = %u", & i);
	printf("\nValue of i = %d", i);
	printf("\nValue of i = %d", *(&i));
}

/*Explanation:
+ The pointer points to the adress 65524 of variable i, that contains the value of   i i.e. 3

+ Pointer points to -> 65524 adress that points to => value 3

+ &i gives the adress of the variable i.

+ *i gives the value stored at the adress of i

+ '&' => 'adress of' operator.

+ The expression &i in the first printf() statement returns the adress of the 
  variable i, which in this case happens to be 65524.

+ As 65524 is an adress, there is no sign associated with it. So to print the        adress we use '%u' which is a format specifier for printing an unsigned integer.

+ The other pointer operator is '*' called 'value at adress' operator which gives
  the value stored at a particular adress.

+ The 'value at adress' operator is also called 'indirection' operator.

+ *(&i) is the same as printing the value of i.

*/







