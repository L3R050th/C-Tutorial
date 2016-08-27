/*Array
Array is a collection of similar data type. For example an array of int type data
or float. Important thing to note is an array can only have data of same type only.
We cannot have comninations of different data types.

Important points about Arrays:

#index of array starts with  zero
#index of last element in array is n-1, where n is the size of an array
#array has static memory allocation. i.e. memory size once allocated for an array
cannot be changed.

Array declaration syntax:

datatype array_name[array_size];
*/

#include <stdio.h>

int main(int argc, char * argv[]) {
	//array initialization
	int a[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int i = 0;

	int lenghtOfArray = sizeof(a)/sizeof(int);

	printf("Lenght of array is: %d\n", lenghtOfArray);

	for(i = 0; i < lenghtOfArray; i++) {
		printf("array element at index[%d] = %d\n", i, a[i]);
	}

	return 0;
}

