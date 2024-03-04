#include <stdio.h>

/*
Write a program that converts 27® from degrees Fahrenheit (F) to
degrees Celsius (C) using the following formula:
C = (F - 32) / 1.8
*/

int main() {
    int tempCelsius; // Celsius is always shown as integer
    int tempFahrenheit = 27;

    tempCelsius = (tempFahrenheit - 32) / 1.8;

    printf("The temperature in Celsius is: %i\n", tempCelsius);

    return 0;
}
