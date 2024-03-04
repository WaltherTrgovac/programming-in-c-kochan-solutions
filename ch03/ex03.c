#include <stdio.h>

/*
Which of the following are invalid constants? Why?
*/

int main() {

    printf("%f\n", 123.456); // Valid
    printf("%o\n", 0001); // Valid, octal
    printf("%#x\n", 0Xab05); // Valid, hexadecimal
    printf("%g\n", 123.5e2); // Valid, scientific notation
    printf("%f\n", 98.6F); // Valid, float
    printf("%lul\n", 1234uL); // Valid, long unsigned
    printf("%Lf\n", 1.234L); // Valid, long double
    printf("%#lx\n", 0XABCDEFL); // Valid, long hexadecimal, L at the end declares long
    // printf("%\n", 0x10.5), // Invalid, no exponent for hexadecimal floating point
    printf("%#x\n", 0xFFFF); // Valid, hexadecimal
    printf("%li\n", 0L); // Valid, can be long int or long double
    printf("%f\n", .0001); // Valid, float 0.0001
    // printf("%uf", 98.7U); // Invalid, suffix U can not go on float
    printf("%g\n", -12E-12); // Valid, scientific notation
    printf("%ui\n", 197u); // Valid, unsigned int
    // printf("%\n", 1.2Fe-7) // Invalid scientific notation
    printf("%ux\n", 0xabcu); // Valid, unsigned hexadecimal
    // printf("%\n", 0X0G1) // Invalid, G doesn't belong to hexadecimal
    printf("%li\n", 123L); // Valid, long int
    printf("%f\n", -597.25); // Valid, negative float
    printf("%i\n", +12); // Valid, positive int
    // printf("%\n", 17777s) // Invalid, no such thing as s suffix
    printf("%o\n", 07777); // Valid, octal
    // printf("%\n", 15,000); // Invalid, commas not allowed
    printf("%ui\n", 100U); // Valid, unsigned int
    printf("%i\n", +123); // Valid, positive int

    return 0;
}