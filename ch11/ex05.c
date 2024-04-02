#include <stdio.h>

/*
Write a function called bit_test() that takes two arguments: an
unsigned int and a bit number n. Have the function return 1 bit
number n if it is on inside the word, and 0 if it is off. Assume that bit
number 0 references the leftmost bit inside the integer. Also write a
corresponding function called bit_set() that takes two arguments: an
unsigned int and a bit number n. Have the function return the result
of turning bit n on inside the integer.
*/

int bit_test(unsigned int word, int n){
    word >>= (32 - n - 1);

    return word & 1;
}

int bit_set(unsigned int word, int n){
    unsigned int packing_bit = 0x1;
    packing_bit <<= (32 - n - 1);
    if (!(bit_test(word, n))){
        // if it is a zero, combine word OR packing_bit
        word |= packing_bit;
    } else {
        // if it is a 1, combine word AND complement packing_bit
        word &= (~packing_bit);
    }
    return word;
}

int main() {

    unsigned int n = 13; // in binary: 0...1011
    for (int i = 0; i < 32; i++){
        printf("Bit at place %u: %i\n", i, bit_test(n, i));
    }
    printf("Flipping the bit at place 0: %u\n", bit_set(n, 28));

    return 0;
};
