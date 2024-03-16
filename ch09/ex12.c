#include <stdio.h>

/*
Write a function called strToFloat() that converts a character string
into a floating-point value. Have the function accept an optional leading
minus sign. So, the call
strToFloat ("-867.6921");
*/


int strToFloat(const char string[]){
    int   intValue = 0;
    int   resultBeforePoint = 0;
    float resultAfterPoint = 0;
    float result = 0;
    int   index = 0;
    int   i;
    int   j;

    if (string[0] == '-'){
        index = 1;
    }

    // before .
    for (i = index; string[i] >= '0' && string[i] <= '9'; i++){
        intValue = string[i] - '0';
        resultBeforePoint = resultBeforePoint * 10 + intValue;
    }

    // after .
    intValue = 0;

    for (j = i + 1; string[j] >= '0' && string[j] <= '9'; j++){
        intValue = string[j] - '0';
        resultAfterPoint = resultAfterPoint * 10 + intValue;
    }

    int difference = j - i - 1;
    for (int k = 0; k < difference; k++){
        resultAfterPoint /= 10;
        printf("result after point: %f\n", resultAfterPoint);
    }

    // Adding the result before . and after .
    result = resultBeforePoint + resultAfterPoint;

    if (string[0] == '-'){
        result*=-1;
    }

    return result;
}

int main() {

    printf("\n");
    printf("Result:: %d", strToFloat("867.6921"));

    return 0;
};
