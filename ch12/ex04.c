#include <stdio.h>

/* SDF
Define a macro MAX3 that gives the maximum of three values. Write a
program to test the definition.
*/

#define MAX3(a,b,c) (((a) > (b)) && ((a) > (c))) ? (a) : ((b > a) && (b > c)) ? (b) : (c)

int main() {

    printf("Maximum of 1, 2, and 3 is: %i\n", MAX3(1,2,3));
    printf("Maximum of 1, 2, and 3 is: %i\n", MAX3(2,1,3));
    printf("Maximum of 1, 2, and 3 is: %i\n", MAX3(3,2,1));

    return 0;
};
