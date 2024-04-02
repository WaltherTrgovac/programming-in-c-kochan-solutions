#include <stdio.h>

/*
Write a macro IS_ALPHABETIC that gives a nonzero value if a
character is an alphabetic character. Have the macro use the
IS_LOWER_CASE macro defined in the chapter text and the
IS_UPPER_CASE macro defined in exercise 6.
*/

#define IS_UPPER_CASE(c) (((c) >= 'A' && (c) <= 'Z') ? 1 : 0)
#define IS_LOWER_CASE(c) (((c) >= 'a' && (c) <= 'z') ? 1 : 0)
#define IS_ALPHABETIC(c) ((IS_LOWER_CASE(c) || IS_UPPER_CASE(c)) ? 1 : 0)

int main() {

    printf("B is alphabetic: %i\n", IS_ALPHABETIC('B'));
    printf("a is alphabetic: %i\n", IS_ALPHABETIC('a'));
    printf("7 is alphabetic: %i\n", IS_ALPHABETIC('7'));
    printf("$ is alphabetic: %i\n", IS_ALPHABETIC('$'));

    return 0;
};
