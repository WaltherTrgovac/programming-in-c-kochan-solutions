#include <stdio.h>

/*
Write a program that asks the user to type in two integer values at the
terminal. Test these two numbers to determine if the first is evenly
divisible by the second, and then display an appropriate message at the
terminal.
*/

int main() {

    int firstNumber;
    int secondNumber;

    printf("Type in two integer values:\n");
    scanf("%i %i", &firstNumber, &secondNumber);

    int even = firstNumber % secondNumber == 0 ? 1 : 0;

    if (even){
        printf("First number is evenly divisible by second number\n");
    } else {
        printf("First number is not evenly divisible by second number\n");
    }

    return 0;
}
