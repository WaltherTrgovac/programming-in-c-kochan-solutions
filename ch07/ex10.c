#include <stdio.h>

/*
Write a function prime() that returns 1 if its argument is a prime
number and returns 0 otherwise.
*/

// calculates whether the number is prime, but inefficient
int prime(int n){
    _Bool isPrime = 1;

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = 0;
        }
    }

    if (isPrime){
        return 1;
    } else {
        return 0;
    }
}


int main(){

    printf("%i\n", prime(11));
    printf("%i\n", prime(9));
    printf("%i\n", prime(15));
    printf("%i\n", prime(17));

    return 0;
}
