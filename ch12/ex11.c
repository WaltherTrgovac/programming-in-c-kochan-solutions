#include <stdio.h>
#include <ctype.h>

/*
Test the system library functions that are equivalent to the macros you
developed in the preceding three exercises. The library functions are
called isupper, isalpha, and isdigit. You need to include the
system header file <ctype.h> in your program in order to use them.
*/

int main() {

    printf("B is a digit: %i\n", isdigit('B'));
    printf("7 is a digit: %i\n", isdigit('7'));
    printf("B is an alphabetical character: %i\n", isalpha('B'));
    printf("$ is an alphabetical character: %i\n", isalpha('$'));
    printf("A is upper case: %i\n", isupper('A'));
    printf("a is upper case: %i\n", isupper('a'));

    return 0;
};
