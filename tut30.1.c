/*Declaring a pointer

Syntax:

datatype *variable_name; //pointer to data type

Example:

int *j; //pointer to integer

+ This means the valueat the adress contained in j is an int.

+ This declaration tells the compiler that j will be used to store the adress of an
  integer value.

+ The j is called as pointer variable. This variables are capable of holding 
  adresses.

  THESE ADRESSES CAN BE COLLECTED IN A VARIABLE

  j = &i;

+ The variable j is called pointer variable that stores the adress of i i.e. 65524

+ j(contains the adress of i) points to ->the adress of i, this points to => value
  of i (i.e. 3) but the adress of j is 65522.

*/

#include <stdio.h>

int main(int argc, char * argv[]) {
	int i = 3; 	//store the adress of an integer value

	int *j;

	j = &i; 	//stores the adress of i variable

	printf("Adress of i variable is %x\n", &i);
	printf("Adress of j variable is %x\n", &j);
	printf("Value of j variable is %d\n", *j);

	return 0;
}


