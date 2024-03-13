#include <stdio.h>

/*
The criteria used for termination of the loop in the squareRoot()
function of Program 7.8 is not suitable for use when computing the square
root of very large or very small numbers. Rather than comparing the
difference between the value of x and the value of guess2, the program
should compare the ratio of the two values to 1. The closer this ratio gets
to 1, the more accurate the approximation of the square root.
Modify Program 7.8 so this new termination criteria is used.
*/

float absoluteValue (float x){
    if (x < 0){
        x = -x;
    }
    return x;
}

float squareRoot(float x, float epsilon){
    float guess = 1.0;

    while (absoluteValue(((guess * guess) / x)) >= epsilon){
        guess = (x / guess + guess) / 2.0;
        printf("Number: %f, epsilon: %f, guess: %f\n", x, epsilon, guess);
    }

    return guess;
}

int main() {

    // The smaller the epsilon value is, the more iterations you need to compute it
    printf("squareRoot(2.0, 0.0001) = %f\n", squareRoot(2.0, 0.0001));
    printf("squareRoot(2.0, 0.001) = %f\n", squareRoot(2.0, 0.001));
    printf("squareRoot(2.0, 0.01) = %f\n", squareRoot(2.0, 0.01));
    printf("squareRoot(2.0, 0.1) = %f\n", squareRoot(2.0, 0.1));
    printf("squareRoot(2.0, 1) = %f\n", squareRoot(2.0, 1));

    return 0;

}