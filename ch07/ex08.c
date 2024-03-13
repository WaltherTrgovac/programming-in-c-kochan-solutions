#include <stdio.h>

/*
An equation of the form
ax^2 + bx + c = 0
is known as a quadratic equation. The values of a, b, and c in the
preceding example represent constant values. So
4x^2 - 17x - 15 = 0
represents a quadratic equation where a = 4, b = −17, and c = −15. The
values of x that satisfy a particular quadratic equation, known as the roots
of the equation, can be calculated by substituting the values of a, b, and c
into the following two formulas:
(picture)
If the value of b2−4ac, called the discriminant, is less than zero, the roots
of the equation, x1 and x2, are imaginary numbers.
Write a program to solve a quadratic equation. The program should allow
the user to enter the values for a, b, and c. If the discriminant is less than
zero, a message should be displayed that the roots are imaginary;
otherwise, the program should then proceed to calculate and display the
two roots of the equation. (Note: Be certain to make use of the
squareRoot() function that you developed in this chapter.)
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

void quadraticEquation(float a, float b, float c){
    float x1;
    float x2;
    float discriminant = b * b - 4 * a * c;

    if (discriminant < 0){
        printf("The roots of the equation are imaginary numbers!");
        return;
    }

    x1 = (- b + (squareRoot(discriminant, 0.0001))) / (2 * a);
    x2 = (- b - (squareRoot(discriminant, 0.0001))) / (2 * a);
    printf("The roots of the equation are x1: %f and x2: %f", x1, x2);
    return;
}


int main() {

    float a;
    float b;
    float c;
    printf("Enter the values for a, b, and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    quadraticEquation(a, b, c);

    return 0;

}