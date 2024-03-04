#include <stdio.h>

/*
Rewrite Program 4.5, replacing all uses of the for statement
with equivalent while statements. Run each program to verify that both
versions are identical.
*/

int main() {

    int n, number, triangularNumber, counter = 1;

    while (counter <= 5){
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;
        n = 1;
        while (n <= number){
            triangularNumber +=n;
            ++n;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
        ++counter;
    }

    return 0;
}