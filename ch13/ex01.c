#include <stdio.h>

/*
Define a type FunctionPtr() (using typedef) that represents a
pointer to a function that returns an int and that takes no arguments.
Refer to Chapter 10, “Pointers,” for the details on how to declare
a variable of this type.
*/

typedef int (*FunctionPtr) (void);

int example(void){
    return 1;
}

int main() {

    FunctionPtr examplePointer = example;
    printf("%i\n", examplePointer());

    return 0;
};
