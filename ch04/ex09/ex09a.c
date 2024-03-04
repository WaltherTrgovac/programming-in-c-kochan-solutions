#include <stdio.h>

/*
Rewrite Program 4.2, replacing all uses of the for statement
with equivalent while statements. Run each program to verify that both
versions are identical.
*/

int main() {

    int n = 1, triangularNumber = 0;

    while (n <= 200){
        triangularNumber = triangularNumber + n;
        ++n;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}