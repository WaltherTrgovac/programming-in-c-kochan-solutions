#include <stdio.h>

/*
The factorial of an integer n, written n!, is the product of the consecutive
integers 1 through n. For example, 5 factorial is calculated as
5! = 5 x 4 x 3 x 2 x 1 = 120
Write a program to generate and print a table of the first 10 factorials.
*/

int main() {

    printf("A table of first 10 factorials:\n");
    printf("------------------------------\n");
    for (int i = 1; i < 11; i++){
        int sum = 1;
        for (int j = 1; j <= i; j++){
            sum*=j;
        }
        printf("%2i    %i\n", i, sum);
    }

    return 0;
}