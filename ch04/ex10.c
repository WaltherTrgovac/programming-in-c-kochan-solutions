#include <stdio.h>

/*
What would happen if you typed a negative number into Program 4.8? Try
it and see.
*/

int main() {

    int number, right_digit;

    printf ("Enter your number.\n");
    scanf ("%i", &number);

    while ( number != 0 ) {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }

    // Output of -524 is -4-2-5

    printf ("\n");

    return 0;
}