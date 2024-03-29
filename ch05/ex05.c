#include <stdio.h>
#include <stdbool.h>

/*
You developed Program 4.9 to reverse the digits of an integer typed in
from the terminal. However, this program does not function well if you
type in a negative number. Find out what happens in such a case and then
modify the program so that negative numbers are correctly handled. For
example, if the number −8645 is typed in, the output of the program should
be 5468−.
*/

int main() {

    int number;
    int right_digit;
    bool is_negative = true;

    printf("Enter your number:\n");
    scanf("%i", &number);
    is_negative = (number < 0) ? is_negative : !is_negative;

    number = is_negative ? -number : number;

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;
    } while (number != 0);

    if (is_negative){
        printf("-");
    }

    return 0;

}