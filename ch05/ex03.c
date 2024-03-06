#include <stdio.h>

/*
Write a program that accepts two integer values typed in by the user.
Display the result of dividing the first integer by the second, to threedecimal-
place accuracy. Remember to have the program check for
division by zero.
*/

int main() {

    int firstNumber;
    int secondNumber;

    printf("Type in two integer values:\n");
    scanf("%i %i", &firstNumber, &secondNumber);

    if (!secondNumber){
        printf("You can't divide by 0!\n");
    } else {
        printf("The result is: %.3f", (float) firstNumber / secondNumber);
    }

    return 0;
}