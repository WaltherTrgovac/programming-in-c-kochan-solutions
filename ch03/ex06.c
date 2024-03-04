#include <stdio.h>

/*
Write a program to evaluate the polynomial shown here:
3x^3 - 5x^2 + 6
for x = 2.55.
*/

int main() {

    float pol;
    float x = 2.55;

    pol = (3 * x * x * x) - (5 * x * x) + 6;

    printf("The result of the polynoimal is %f\n", pol);

    return 0;
}