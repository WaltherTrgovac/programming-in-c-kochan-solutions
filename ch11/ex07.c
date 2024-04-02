#include <stdio.h>

/*
Write a function called bitpat_get() to extract a specified set of
bits. Have it take three arguments: the first an unsigned int, the
second an integer starting bit number, and the third a bit count. Using the
convention that bit numbering starts at 0 with the leftmost bit, extract the
specified number of bits from the first argument and return the result. So
the call
bitpat_get (x, 0, 3)
extracts the three leftmost bits from x. The call
bitpat_get (x, 3, 5)
extracts five bits starting with the fourth bit in from the left.
*/

unsigned int bitpat_get(unsigned int word, int starting_bit, int bit_count){
    // Get rid of 1s on the left side from the starting bit
    word <<= starting_bit;
    word >>= starting_bit;
    // Push the sequence to the right
    int right_side = 32 - starting_bit - bit_count;
    word >>= right_side;
    return word;
}

int main() {

    unsigned int word = 0xffffffff;
    printf("%u\n", word);
    printf("%u", bitpat_get(word, 15, 16));
    return 0;
};
