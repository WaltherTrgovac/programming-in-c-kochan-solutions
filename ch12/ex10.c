#include <stdio.h>

/*
Consider the definition of the printint macro from this chapter:
#define printint(n) printf ("%i\n", x ## n)
Could the following be used to display the values of the 100 variables
x1–x100? Why or why not?
for (i = 1; i < 100; ++i)
printx (i);
*/

#define printx(n) printf("%i\n", x ## n)

int main() {

    // Does not seem to work? Might be a typo somewhere in the
    // exercise.
    printx(2);
    for (int i = 0; i < 100; i++){
        printx(i);
    }

    return 0;
};
