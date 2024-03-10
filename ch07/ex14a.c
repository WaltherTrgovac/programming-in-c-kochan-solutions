#include <stdio.h>

/*
Rewrite the functions developed in the last four exercises to use global
variables instead of arguments. For example, the preceding exercise
should now sort a globally defined array.
*/

int n;

// calculates whether the number is prime, but inefficient
int prime(){
    _Bool isPrime = 1;

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = 0;
        }
    }

    if (isPrime){
        printf("Your number is prime: ");
        return 1;
    } else {
        printf("Your number is not prime: ");
        return 0;
    }
}

int main(){

    printf("What number do you want to test whether it is prime?\n");
    scanf("%i", &n);
    printf("%i\n", prime(n));

    return 0;
}
