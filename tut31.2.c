/*Pointer Arithmetic III

We can add a value to the pointer variable.
The formula of adding value to pointer is given below:

new_address = current_address + (value * size_of(data type))

*/

#include <stdio.h>

int main(int argc, char *argv[]) {

        int i = 3;
        int *j;         //pointer to int

        j = &i;         //stores the adress of i variable

        printf("Adress of i variable is %u\n", j);

        j = j + 1;      //incrementing pointer by 1 (4 bytes) (else: j++)

        printf("After incrementation: Adress of i variable is %u\n", j);

        return 0;
}

//Explanation:
//For 32 bit in variable, it will add 2 * number.
//For 64 bit in variable, it will add 4 * number.


