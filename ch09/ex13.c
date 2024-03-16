#include <stdio.h>

/*
If c is a lowercase character, the expression
c – 'a' + 'A'
produces the uppercase equivalent of c, assuming an ASCII character set.
Write a function called uppercase() that converts all lowercase
characters in a string into their uppercase equivalents.
*/

void uppercase(char string[]){
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] >= 'a' && string[i] <= 'z'){
            string[i] = string[i] - 'a' + 'A';
        }
    }
}

int main() {

    char text[] = {"What is GOIng oN"};
    uppercase(text);
    printf("\n%s", text);

    return 0;
};
