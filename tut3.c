//Data Types: "float", "double", and "long int" 
#include <stdio.h>

int main(int argc, char *argv[]) {

	int myint;
	char mychar;

	float myfloat;

	long int mylongint;
	double mydouble;

	myint = 24;
	mychar = 'r';

	printf("myint and mychar are: %d and %c\n", myint, mychar);

	myfloat = 23.576;

	printf("myfloat = %f\n", myfloat);
	
	printf("size of int = %d\n", sizeof(int));
	printf("size of int = %d\n", sizeof(myint));
	
	printf("size of char = %d\n", sizeof(char));
	printf("size of char = %d\n", sizeof(mychar));

	printf("size of int = %d\n", sizeof(float));
	printf("size of int = %d\n", sizeof(myfloat));
	
	printf("size of long  int = %d\n", sizeof(long int));
	printf("size of long  int = %d\n", sizeof(mylongint));

	printf("size of double %d\n", sizeof(double));



	return 0;


}

