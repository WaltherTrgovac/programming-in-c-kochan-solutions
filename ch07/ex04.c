#include <stdio.h>

/*
Modify Program 7.8 so that the value of guess is printed each time
through the while loop. Notice how quickly the value of guess
converges to the square root. What conclusions can you reach about the
number of iterations through the loop, the number whose square root is
being calculated, and the value of the initial guess?
*/

float absoluteValue (float x){
    if (x < 0){
        x = -x;
    }
    return x;
}

float squareRoot(float x, float epsilon){
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon){
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