#include <stdio.h>

/*
You don’t need to use an array to generate Fibonacci numbers. You can
simply use three variables: two to store the previous two Fibonacci
numbers and one to store the current one. Rewrite Program 6.3 so that
arrays are not used. Because you’re no longer using an array, you need to
display each Fibonacci number as you generate it.
*/

int main() {

    int firstNumber = 0;
    int secondNumber = 1;
    int fibonacciNumber;
    int desiredNumber;

    printf("What fibonacci number do you want? (0 is the first one)\n");
    scanf("%i", &desiredNumber);

    if (desiredNumber == 1){
        printf("Your fibonacci number is 0");
        return 0;
    } else if (desiredNumber == 2){
        printf("Your fibonacci number is 1");
        return 0;
    }
    // Reduce the desired number by two so that the loop iterates correct amount of times
    desiredNumber-=2;

    while (desiredNumber > 0){
        fibonacciNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = fibonacciNumber;
        desiredNumber--;
    }

    printf("Your fibonacci number is %i", fibonacciNumber);

    return 0;

}
