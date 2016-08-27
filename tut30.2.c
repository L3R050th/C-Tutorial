/*Pointer to Pointer
Pointer is a variable that contains the adress of another variable. Now this 
variable itself might be another pointer. Thus, we now hava a pointer that containsanother pointer's adress.
*/

#include <stdio.h>

int main(int argc, char * argv[]) {
	int i = 3;	//i is an ordinary unit
	int *j;		//j is a pointer to an int
	int **k;	//k is a pointer to an integer pointer

	j = &i;		//adress of variable i is stored in j
	k = &j;		//adress of variable j is stored in k

	printf("\nAdress of i = %u", &i);
        printf("\nAdress of i = %u", j);
        printf("\nAdress of i = %u", *k);	//will return the adress of i
        printf("\nAdress of j = %u", &j);
        printf("\nAdress of j = %u", k);    //will return value of k or adress of j
        printf("\nAdress of k = %u", &k);	//will return adress of k
        printf("\nAdress of i = %u", j);
        printf("\nAdress of i = %u", k);
        printf("\nAdress of i = %d", i);
        printf("\nAdress of i = %d", * (&i)); //will give value stored at the       						 //adress of variable i
        printf("\nAdress of i = %d", *j);
        printf("\nAdress of i = %d", **k);	//will return value of i

	return 0;
}

//**k = *(&j) => [*(&j)] will give the value stored at the adress of variable j,
//i.e. 65524 which is the adress of variable i i.e. &i.

//*k = *(&j) => *(65522) will return value stored at this adress of the variable j
//i.e 65524 = 65524


