#include <stdio.h>

/*
Write a function called bitpat_set() to set a specified set of bits to
a particular value. The function should take four arguments: a pointer to an
unsigned int in which the specified bits are to be set; another
unsigned int containing the value to which the specified bits are to
be set, right adjusted in the unsigned int; a third int that specifies
the starting bit number (with the leftmost bit numbered 0); and a fourth
int specifying the size of the field. So the call
bitpat_set (&x, 0, 2, 5);
has the effect of setting the five bits contained in x, beginning with the
third bit from the left (bit number 2), to 0. Similarly, the call
bitpat_set (&x, 0x55u, 0, 8);
sets the eight leftmost bits of x to hexadecimal 55.
Make no assumptions about the particular size of an int (refer to
exercise 3 in this chapter).
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

int bitpat_set(unsigned int* word, unsigned int bits, int starting_point, int length){
    // EXAMPLE:
    // Replace 101 with 111 in word:
    // word =          0101 0101 0010 1010 1010
    // replace               XXX
    // zero_bit_mask = 0000 0000 0000 0000 0000
    // Get rid of ones and shift to left.
    // zero_bit_mask = 0000 0111 0000 0000 0000
    // complement mask 1111 1000 1111 1111 1111
    // Use the AND operator with mask and word.
    // result:         0101 0000 0010 1010 1010
    //                       XXX
    // Now shift bits to the right and use OR
    // operator with bits and word
    // bits:           0000 0000 0000 0000 0111
    // Shift them to left:
    // result:         0000 0111 0000 0000 0000
    // Use the OR operator on word and bits:
    // Final result:   0101 0111 0010 1010 1010
    int intSize = int_size();
    // 1. set the sequence to be replaced in word to 0
    unsigned int zero_bit_mask = 0x0;
    zero_bit_mask >>= (intSize - length);
    printf("zero_bit_mask: %u\n", zero_bit_mask);
    zero_bit_mask <<= (intSize - starting_point);
    printf("zero_bit_mask: %u\n", zero_bit_mask);
    *word &= ~(zero_bit_mask);
    printf("word: %u\n", *word);
    // 2. take the bits, shift them to left accordingly
    bits <<= (intSize - starting_point - length);
    printf("bits: %u\n", bits);
    // 3. combine word with the OR operator with bits
    *word |= bits;

    return *word;
}



int main() {

    unsigned int word = 13;
    unsigned int bits = 7;
    int starting_point = 29; // first bit is 0
    int length = 3;
    printf("%u\n", bitpat_set(&word, bits, starting_point, length));

    return 0;
};
