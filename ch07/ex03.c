#include <stdio.h>

/*
Modify Program 7.8 so that the value of epsilon is passed as an
argument to the function. Try experimenting with different values of
epsilon to see the effect that it has on the value of the square root.
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
    }

    return guess;
}

int main() {

    printf("squareRoot(2.0, 0.0001) = %f\n", squareRoot(2.0, 0.0001));
    printf("squareRoot(2.0, 0.001) = %f\n", squareRoot(2.0, 0.001));
    printf("squareRoot(2.0, 0.01) = %f\n", squareRoot(2.0, 0.01));
    printf("squareRoot(2.0, 0.1) = %f\n", squareRoot(2.0, 0.1));
    printf("squareRoot(2.0, 1) = %f\n", squareRoot(2.0, 1));

    return 0;

}