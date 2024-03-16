#include <stdio.h>
#include <stdbool.h>

/*
Write a function called intToStr() that converts an integer value into
a character string. Be certain the function handles negative integers
properly.
*/

void intToStr(int number, char result[]){

    int i = 0;
    char array[10] = {"0123456789"};
    char temp;
    bool negative = false;

    negative = (number < 0) ? 1 : 0;
    if (negative){
        number*=-1;
    }

    while (number != 0){
        result[i] = array[number%10];
        number/=10;
        i++;
    }
    if (negative){
        result[i] = '-';
        i++;
    }

    for (int k = 0; k < i / 2; k++){
        temp = result[i-k-1];
        result[i-k-1] = result[k];
        result[k] = temp;
    }

    printf("%s", result);

}

int main() {
    char result[100] = {};

    intToStr(2457, result);
    return 0;
};
