#include <stdio.h>

/*
Write a function called bitpat_search() that looks for the
occurrence of a specified pattern of bits inside an unsigned int. The
function should take three arguments and should be called as shown:
bitpat_search (source, pattern, n)
The function searches the integer source, starting at the leftmost bit, to
see if the rightmost n bits of pattern occur in source. If the pattern is
found, have the function return the number of the bit at which the pattern
begins, where the leftmost bit is a bit number 0. If the pattern is not found,
then have the function return −1. So, for example, the call
index = bitpat_search (0xe1f4, 0x5, 3);
causes the bitpat_search() function to search the number 0xe1f4 ( =
1110 0001 1111 0100 binary ) for the occurrence of the three-bit pattern
0x5 (= 101 binary). The function returns 11 to indicate that the pattern
was found in the source beginning with bit number 11.
Make certain that the function makes no assumptions about the size of an
int (see exercise 3 in this chapter).
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

int bitpat_search(unsigned int source, unsigned int pattern, int n){
    int intSize = int_size();
    // get rid of 1s in the pattern
    pattern <<= (intSize - n);
    pattern >>= (intSize - n);
    int counter = 32 - n;

    for (int i = 0; i < 32; i++){
        if ((source & pattern) == pattern){
            return counter;
        } else {
            counter--;
            pattern <<= 1;
        }
    }

    return -1;
}

int main() {

    printf("Result from the example from the book: %u\n", bitpat_search(0xe1f4, 0x5, 3));

    return 0;
};
