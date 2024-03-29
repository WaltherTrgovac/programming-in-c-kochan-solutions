#include <stdio.h>

/*
A triangular number can also be generated by the formula
triangularNumber = n (n + 1) / 2
for any integer value of n. For example, the 10th triangular number, 55,
can be generated by substituting 10 as the value for n in the preceding
formula. Write a program that generates a table of triangular numbers
using the preceding formula. Have the program generate every fifth
triangular number between 5 and 50 (that is, 5, 10, 15, ..., 50).
*/

int main() {

    printf("A table of triangular numbers:\n");
    printf("------------------------------\n");
    for (int i = 5; i <= 50; i+=5){
        printf("%2i      %i\n", i, (i * (i+1)) / 2);
    }

    return 0;
}