#include <stdio.h>

/*
Rewrite Program 4.3, replacing all uses of the for statement
with equivalent while statements. Run each program to verify that both
versions are identical.
*/

int main() {

    int n = 1, triangularNumber = 0;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf ("n Sum from 1 to n\n");
    printf ("------------------\n");

    while (n <= 10){
        triangularNumber += n;
        printf("%2i          %i\n", n, triangularNumber);
        ++n;
    }

    return 0;
}