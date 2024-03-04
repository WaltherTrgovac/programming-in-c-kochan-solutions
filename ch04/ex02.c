#include <stdio.h>

/*
Write a program to generate and display a table of n and n2, for integer
values of n ranging from 1 to 10. Be certain to print appropriate column
headings.
*/

int main() {

    printf("A table of n and n^2:\n");
    printf("---------------------\n");
    for (int i = 1; i < 11; i++){
        printf("%2i    %i\n", i, i*i);
    }

    return 0;
}