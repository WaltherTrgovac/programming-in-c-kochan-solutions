#include <stdio.h>

/*
Given the following declarations:
char *message = "Programming in C is fun\n";
char message2[] = "You said it\n";
char *format = "x = %i\n";
int x = 100;
determine whether each printf() call from the following sets is valid
and produces the same output as other calls from the set.
*/

int main() {

    char* message = "Programming in C is fun\n";
    char message2[] = "You said it\n";
    char* format = "x = %i\n";
    int x = 100;

    /*** set 1 ***/
    // This produces the same input, but the last statement is not safe
    printf("Programming in C is fun\n");
    printf("%s", "Programming in C is fun\n");
    printf("%s", message);
    printf(message);

    /*** set2 ***/
    // This produces the same input, but the third statement is not safe
    printf("You said it\n");
    printf ("%s", message2);
    printf (message2);
    printf ("%s", &message2[0]);

    /*** set 3 ***/
    // This produces the same input, but the second statement is not safe
    printf ("said it\n");
    printf (message2 + 4);
    printf ("%s", message2 + 4);
    printf ("%s", &message2[4]);

    /*** set 4 ***/
    // This produces the same input
    printf ("x = %i\n", x);
    printf (format, x);

    return 0;
};
