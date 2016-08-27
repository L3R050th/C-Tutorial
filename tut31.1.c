/*Pointer Arithmetic II

Decrement:
The formula of decrementing a pointer is given below:

new_address = current_address - i * size_of(data type)

*/

#include <stdio.h>

int main(int argc, char *argv[]) {

        int i = 3;
        int *j;         //pointer to int

        j = &i;         //stores the adress of i variable

        printf("Adress of i variable is %u\n", j);

        j = j - 1;      //decrementing pointer by 1 (4 bytes) (else: j--)

        printf("After decrementation: Adress of i variable is %u\n", j);

        return 0;
}


