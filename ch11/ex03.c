#include <stdio.h>

/*
Given that the expression ~0 produces an integer that contains all 1s,
write a function called int_size() that returns the number of bits
contained in an int on your particular machine.
*/

int int_size(){
    unsigned int n = ~0;
    int counterBits = 0;

    while (n != 0){
        n = n >> 1;
        counterBits++;
    }

    return counterBits;
}

int main() {

    printf("Your int size is %i bits long", int_size());

    return 0;
};
