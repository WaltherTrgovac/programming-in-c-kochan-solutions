#include <stdio.h>

/*
Prime numbers can also be generated by an algorithm known as the Sieve
of Eratosthenes. The algorithm for this procedure is presented here. Write
a program that implements this algorithm. Have the program find all prime
numbers up to n = 150. What can you say about this algorithm as compared
to the ones used in the text for calculating prime numbers?
Sieve of Eratosthenes Algorithm
To Display All Prime Numbers Between 1 and n
Step 1: Define an array of integers P. Set all elements Pi to 0, 2 <= i <=
n.
Step 2: Set i to 2.
Step 3: If i > n, the algorithm terminates.
Step 4: If Pi is 0, then i is prime.
Step 5: For all positive integer values of j, such that i x j ≤ n, set Pixj to
1.
Step 6: Add 1 to i and go to step 3.
*/

int main() {

    int P[151];
    for (int i = 2; i < 151; i++){
        P[i] = 0;
    }

    int result[151] = {};
    int k = 0;
    int i = 2;

    while (i < 151){
        if (P[i] == 0){
            result[k] = i;
            k++;
        }
        for (int j = 1; i * j < 151; j++){
            P[i*j] = 1;
        }
        i++;
    }

    for (int i = 0; i < 151; i++){
        if (result[i] == 0){
            break;
        }
        printf("%i ", result[i]);
    }

    return 0;

}