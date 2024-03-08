#include <stdio.h>

/*
What output do you expect from the following program?
*/

int main() {

    int numbers[10] = {1};
    int i, j;

    // this for loop is always summing up all the previous numbers in the array
    for (j = 0; j < 10; ++j){
        for (i = 0; i < j; ++i){
            numbers[j] += numbers[i];
        }
    }

    for (j = 0; j < 10; ++j){
        printf("%i ", numbers[j]);
    }

    return 0;

}
