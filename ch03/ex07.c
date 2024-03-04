#include <stdio.h>

/*
Write a program that evaluates the following expression and displays the
results (remember to use exponential format to display the result):
*/

int main() {

    float leftSide = (3.31e-8 * 2.01e-7);
    float rightSide = (7.16e-6 * 2.01e-8);
    float result = leftSide / rightSide;

    printf("The result of the expression is: %g\n", result);

    return 0;
}