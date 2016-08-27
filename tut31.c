/*Pointer Arithmetic

The pointer holds the address of a value, so there can be arithmetic operations
on the pointer variable.

Arithmetic operations possible on pointer in C language:

+ Increment
+ Decrement
+ Addition
+ Substraction

Increment:
+ Incrementing a pointer is used in array because it is contiguous memory location
+ Increment operation depends on the data type of the pointer variable

The formula of incrementing  pointer is given below:

new_address = current_address + i * size_of(data type)
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int i = 3;
	int *j;		//pointer to int

	j = &i; 	//stores the adress of i variable

	printf("Adress of i variable is %u\n", j);

	j = j + 1;	//incrementing pointer by 1 (4 bytes) (else: j++)

	printf("After incrementation: Adress of i variable is %u\n", j);

	return 0;
}


