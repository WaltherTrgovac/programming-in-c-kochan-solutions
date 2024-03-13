#include <stdio.h>

/*
Modify Program 7.4 so the value of triangularNumber is returned
by the function. Then go back to Program 4.5 and change that program so
that it calls the new version of the calculateTriangularNumber() function.
*/

int calculateTriangularNumber(int n){
    int triangularNumber = 0;

    for (int i = 0; i <= n; i++){
        triangularNumber+=i;
    }

    return triangularNumber;
}

int main() {
    int number;

    for (int counter = 1; counter <= 5; counter++){
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        printf("Triangular number %i is %i\n\n", number, calculateTriangularNumber(number));
    }

    return 0;
}