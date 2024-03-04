#include <stdio.h>

/*
Which of the following are invalid variable names? Why?
*/

int main() {

    // Using int as a data type and testing whether the name is correct if the compilation succeeds
    int Int; // Valid, int is reserved, in C upper- and lowercase letters are distinct
    int Calloc; // Valid
    int floating; // Valid
    int ReInitialize; // Valid
    // int char; // Invalid, char is reserved for char data type
    int Xx; // Valid
    int _1312; // Valid, names are allowed to start with underscore
    int _; // Valid
    // int 6_05; // Invalid, underscore is allowed only to be at the start
    int alpha_beta_routine; // Valid
    int z; // Valid
    int A$; // Valid, according to the book it should not be?

    return 0;
}
