#include <stdio.h>

/*
Write a program that calculates the sum of the digits of an integer. For
example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
The program should accept any arbitrary integer typed in by the user.
*/

int main() {
    int sum = 0, n;

    printf("Enter the number that you want to sum the digits from: \n");
    scanf("%i", &n);

    while (n != 0){
        sum += n % 10;
        n /= 10;
    }

    printf("The sum of digits is: %i", sum);

    return 0;
}