#include <stdio.h>

/*
Write a macro IS_DIGIT that gives a nonzero value if a character is a
digit '0' through '9'. Use this macro in the definition of another macro
IS_SPECIAL, which gives a nonzero result if a character is a special
character; that is, not alphabetic and not a digit. Be certain to use the
IS_ALPHABETIC macro developed in exercise 7.
*/

#define IS_UPPER_CASE(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_LOWER_CASE(c) ((c) >= 'a' && (c) <= 'z')
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))
#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')
#define IS_SPECIAL(c) ((!IS_DIGIT(c)) && (!IS_ALPHABETIC(c)))

int main() {

    printf("B is a digit: %i\n", IS_DIGIT('B'));
    printf("7 is a digit: %i\n", IS_DIGIT('7'));
    printf("B is a special character: %i\n", IS_SPECIAL('B'));
    printf("$ is a special character: %i\n", IS_SPECIAL('$'));

    return 0;
};
