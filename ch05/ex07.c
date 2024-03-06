#include <stdio.h>

/*
Program 5.10 has several inefficiencies. One inefficiency results from
checking even numbers. Because it is obvious that any even number
greater than 2 cannot be prime, the program could simply skip all even
numbers as possible primes and as possible divisors.
The inner for loop is also inefficient because the value of p is always
divided by all values of d from 2 through p−1. This inefficiency could
be avoided by adding a test for the value of isPrime in the conditions
of the for loop. In this manner, the for loop could be set up to
continue as long as no divisor was found and the value of d was less
than p. Modify Program 5.10 to incorporate these two changes. Then run
the program to verify its operation.
*/

int main() {

    int p;
    int d;
    _Bool isPrime;

    printf("%i ", 2);
    for (p = 3; p <= 49; p+=2){
        isPrime = 1;
        for (d = 2; d < p; ++d){
            if (p % d == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime){
            printf("%i ", p);
        }
    }

    return 0;

}