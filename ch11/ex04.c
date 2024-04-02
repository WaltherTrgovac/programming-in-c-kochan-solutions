#include <stdio.h>

/*
Using the result obtained in exercise 3, modify the rotate() function
from Program 11.4 so that it no longer makes any assumptions about the
size of an int.
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

unsigned int rotate(unsigned int value, int n){
    unsigned int result;
    unsigned int bits;
    int intSize = int_size();

    if (n > 0){
        n = n % intSize;
    } else {
        n = -(-n % intSize);
    }

    if (n == 0){
        result = value;
    } else if (n > 0) {
        bits = value >> (intSize - n);
        result = value << n | bits;
    } else {
        n = -n;
        bits = value << (intSize - n);
        result = value >> n | bits;
    }

    return result;
}

int main() {

    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    return 0;
};
