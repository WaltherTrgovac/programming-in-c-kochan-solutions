#include <stdio.h>

/*
Extend the strToInt() function from Program 9.11 so that if the first
character of the string is a minus sign, the value that follows is taken as a
negative number.
*/

int strToInt(const char string[]){
    int intValue = 0;
    int result = 0;
    int index = 0;

    if (string[0] == '-'){
        index = 1;
    }

    for (int i = index; string[i] >= '0' && string[i] <= '9'; i++){
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    if (string[0] == '-'){
        result*=-1;
    }

    return result;
}

int main() {

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("-245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("2147483647"));
    printf("%i\n", strToInt("-2147483648"));

    return 0;
};
