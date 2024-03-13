#include <stdio.h>

/*
Modify Program 7.8 so that the squareRoot() function accepts a
double precision argument and returns the result as a double precision
value. Be certain to change the value of the variable epsilon to reflect
the fact that double precision variables are now being used.
*/

double absoluteValue (double x){
    if (x < 0){
        x = -x;
    }
    return x;
}

double squareRoot(double x, double epsilon){
    double guess = 1.0;

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