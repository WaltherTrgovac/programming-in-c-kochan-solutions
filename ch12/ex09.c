#include <stdio.h>

/*
Write a macro ABSOLUTE_VALUE that computes the absolute value of
its argument. Make certain that an expression such as
ABSOLUTE_VALUE (x + delta)
is properly evaluated by the macro.
*/

#define ABSOLUTE_VALUE(n) ((n > 0) ? (n) : (-(n)))

int main() {

    printf("Absolute value of -5 is: %i\n", ABSOLUTE_VALUE(-5));
    printf("Absolute value of 2-5 is: %i\n", ABSOLUTE_VALUE(2-5));
    printf("Absolute value of 5 is: %i\n", ABSOLUTE_VALUE(-5));
    printf("Absolute value of -1-2-3 is: %i\n", ABSOLUTE_VALUE(-1-2-3));

    return 0;
};
