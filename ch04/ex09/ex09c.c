#include <stdio.h>

/*
Rewrite Program 4.4, replacing all uses of the for statement
with equivalent while statements. Run each program to verify that both
versions are identical.
*/

int main() {
    int n = 1, triangularNumber = 0, number;
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    while (n <= number){
        triangularNumber += n;
        ++n;
    }

    printf ("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}