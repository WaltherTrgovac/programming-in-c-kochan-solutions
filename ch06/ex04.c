#include <stdio.h>

/*
Write a program that calculates the average of an array of 10 floating point
values.
*/

int main() {

    float number;
    float sum = 0;

    printf("Enter your 10 numbers to calculate the average:\n");
    for (int i = 0; i < 10; i++){
        scanf("%f", &number);
        sum += number;
    }
    printf("Your average is %f", sum/=10);

    return 0;

}
