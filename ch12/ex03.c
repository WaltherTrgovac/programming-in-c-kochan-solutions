#include <stdio.h>

/*
Define a macro MIN that gives the minimum of two values. Then write a
program to test the macro definition.
*/

#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int main() {

    printf("Minimum 3 and 5 is: %i\n", MIN(3-2,5));
    printf("Minimum 5 and 3 is: %i\n", MIN(5,3));
    printf("Minimum -2 and 5 is: %i\n", MIN(-2,5));

    return 0;
};
