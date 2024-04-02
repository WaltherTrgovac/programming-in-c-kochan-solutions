#include <stdio.h>

/*
Write a macro SHIFT to perform the identical purpose as the shift
function of Program 11.3.
*/

#define SHIFT(value, n) (n > 0) ? (value << n) : (value >> (-n))
#define LEFT_SHIFT(n) << n
#define RIGHT_SHIFT(n) >> n

int main() {

    printf("Left shifting number 4 by 2: %i\n", SHIFT(4, 2));
    printf("Left shifting number 4 by 2: %i\n", 4 LEFT_SHIFT(2));
    printf("Right shifting number 16 by 2: %i\n", 16 RIGHT_SHIFT(2));

    return 0;
};
