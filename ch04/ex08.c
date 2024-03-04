#include <stdio.h>

/*
Program 4.5 allows the user to type in only five different numbers.
Modify that program so that the user can type in the number of triangular
numbers to be calculated.
*/

int main() {

    int n, number, triangularNumber, counter, limit;
    printf("How many triangular numbers do you want to calculate?\n");
    scanf("%i", &limit);

    for (counter = 1; counter <= limit; ++counter) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);
        triangularNumber = 0;
        for (n = 1; n <= number; ++n){
            triangularNumber += n;
        }

        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}