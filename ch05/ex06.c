#include <stdio.h>
#include <math.h>

/*
Write a program that takes an integer keyed in from the terminal and
extracts and displays each digit of the integer in English. So, if the user
types in 932, the program should display
nine three two
Remember to display “zero” if the user types in just a 0. (Note: This
exercise is a hard one!)
*/

// NOT OPTIMAL SOLUTION
int main() {

    int number;
    int number_counter;
    printf("Enter your integer number:\n");
    scanf("%i", &number);
    number_counter = number;

    if (number == 0){
        printf("zero");
        return 0;
    }

    double reversedNumber = 0;
    int count = -1;

    while (number_counter != 0){
        number_counter /= 10;
        ++count;
    }

    while (number != 0){
        reversedNumber += ((number % 10) * pow(10, count));
        number /= 10;
        count--;
    }

    while ((int) reversedNumber != 0){
        int remainder = (int) reversedNumber % 10;
        switch (remainder){
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
        reversedNumber /= 10;
    }

    return 0;

}