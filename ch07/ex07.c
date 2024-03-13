#include <stdio.h>

/*
Write a function that raises an integer to a positive integer power. Call the
function x_to_the_n() taking two integer arguments x and n. Have
the function return a long int, which represents the results of
calculating x^n.
*/

long int x_to_the_n(int x, int n){
    long int result = 1;

    for (int i = 0; i < n; i++){
        result*=x;
    }

    return result;
}

int main() {

    printf("The result of 5 to the power of 3 is: %li\n", x_to_the_n(5,3));

    return 0;

}