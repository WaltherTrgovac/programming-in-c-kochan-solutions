#include <stdio.h>

/*
Write a macro IS_UPPER_CASE that gives a nonzero value if a
character is an uppercase letter.
*/

#define IS_UPPER_CASE(c) (((c) >= 'A' && (c) <= 'Z') ? 1 : 0)

int main() {

    printf("A is upper case: %i\n", IS_UPPER_CASE('A'));
    printf("b is upper case: %i\n", IS_UPPER_CASE('b'));
    printf("F is upper case: %i\n", IS_UPPER_CASE('F'));
    printf("z is upper case: %i\n", IS_UPPER_CASE('z'));

    return 0;
};
