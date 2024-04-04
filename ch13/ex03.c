#include <stdio.h>

/*
Given the following variable declarations:
float f = 1.00;
short int i = 100;
long int l = 500L;
double d = 15.00;
and the seven steps outlined in this chapter for conversion of operands in
expressions, determine the type and value of the following expressions:
f + i
l / d
i / l + f
l * i
f / 2
i / (d + f)
l / (i * 2.0)
l + i / (double) l
*/

/*
Rules:
1. If either operand is of type long double, the other is converted to
   long double, and that is the type of the result.
2. If either operand is of type double, the other is converted to double,
   and that is the type of the result.
3. If either operand is of type float, the other is converted to float, and
   that is the type of the result.
4. If either operand is of type _Bool, char, short int, bit field,
   or of an enumerated data type, it is converted to int.
5. If either operand is of type long long int, the other is converted to
   long long int, and that is the type of the result.
6. If either operand is of type long int, the other is converted to long
   int, and that is the type of the result.
7. If this step is reached, both operands are of type int, and that is the type
   of the result.
*/

int main() {

    float     f = 1.00;
    short int i = 100;
    long int  l = 500L;
    double    d = 15.00;

    // Rule 3, f is float, and therefore the other is converted to float.
    printf("f + i: %f\n", f + i);

    // Rule 2, d is double, and therefore the other is converted to double.
    printf("l / d: %f\n", l / d);

    // Rule 6, l is long int, and therefore i is converted to long int.
    // Rule 3, f is float, and therefore i / l is converted to float.
    printf("i / l + f: %f\n", i / l + f);

    // Rule 6, l is long in, and therefore i is converted to long int.
    printf("l * i: %li\n", l * i);

    // Rule 3, f is float, and therefore the other is converted to float.
    printf("f / 2: %f\n", f / 2);

    // Rule 2, (d + f), d is double so f is converted to double
    // Rule 2, (d + f) is double so i is converted to double
    printf("i / (d + f): %f\n", i / (d + f));

    // Rule 2, (i * 2.0), 2.0 is double so i is converted to double
    // Rule 2, (i * 2.0) is double so i is converted to double
    printf("i / (i * 2.0): %f\n", i / (i * 2.0));

    // Rule 2, (i / (double) l), l is seen as double, so the result is double
    // Rule 2, (i / (double) l) is double, so l is converted to double
    printf("l + i / (double) l: %f\n", l + i / (double) l);

    return 0;
};
