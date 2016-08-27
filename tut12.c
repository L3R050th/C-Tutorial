/*Bitwise Operator

Bitwise operators perform manipulations of data at bit level. These operators
also perform shifting of bits from right to the left. Bitwise operators are
not applied to float or double.

Operator | Description
----------------------
   &     | Bitwise AND
   |     | Bitwise OR
   ^     | Bitwise XOR
   <<    | Left shift
   >>    | Right shift
----------------------

*/

#include <stdio.h>

int main(int argc, char *argv[]) {

/*Explanation:
& (Bitwise AND) - The Bitwise AND will take pairs of bits from each position, 
and only if both of the bits are 1, the result will be 1. Bitwise AND is used
to Turn-Off bits.
*/
	
	int a = 10, b = 12;
	int c = a & b;
	printf("value of c: %d\n", c);

/*Calculation:

	bit
a =     1010
b =     1100
        ----
c =     1000
*/

//--------------------------------------------------------------------------

/*Explanation:
| (Bitwise OR) - The bitwise OR, will take a pair of bits from each position 
and if any one of the bit is 1, the result on that position will be 1 else 0.
*/

	int c1 = a | b;
        printf("value of c1: %d\n", c1);

/*Calculation:

	bit
a =     1010
b = 	1100
	----
c =     1110
*/

//-------------------------------------------------------------------------

/*Explanation
^ (Bitwise XOR) -The Bitwise XOR will take a pair of bits from each position,
and if both of the bits are different, the result on that position will be 
1. Otherwise the result will be 0.
*/

	int c2 = a ^ b;
        printf("value of c2: %d\n", c2);

/*Calculation:

        bit
a =     1010
b =     1100
        ----
c =     0110
*/

//------------------------------------------------------------------------

/*Explanation
<< (left shift) - Left shift operator will shift the bits towards left for 
the given number of times
*/

	a = 6;
	int c3 = a << 2;
	printf("Value of c3: %d\n", c3);

/*Calculation:

a = 6
Position 7 6 5 4 3 2 1 
6 in bit 0 0 0 0 1 1 0
Shifting 2 bit to left
Position 7 6 5 4 3 2 1
Result   0 0 1 1 0 0 0 
*/

//-----------------------------------------------------------------------

/*Explanation
>> (right shift) - rightt shift operator will shift the bits towards right for
the given number of times
*/

        a = 6;
        int c4 = a >> 2;
        printf("Value of c4: %d\n", c4);

/*Calculation:

a = 6
Position 7 6 5 4 3 2 1
6 in bit 0 0 0 0 1 1 0
Shifting 2 bit to right
Position 7 6 5 4 3 2 1
Result   0 0 0 0 0 0 1 
*/

return 0;
}




