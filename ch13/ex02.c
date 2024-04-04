#include <stdio.h>

/*
Write a function called monthName() that takes as its argument a value
of type enum month (as defined in this chapter) and returns a pointer to
a character string containing the name of the month. In this way, you can
display the value of an enum month variable with a statement such as:
printf ("%s\n", monthName (aMonth));
*/

enum month {January = 1, February, March, April, May, June,
            July, August, September, October, November, December};

char* months[] = {"January", "February", "March", "April",
                "May", "June", "July", "August", "September",
                "October", "November", "December"};

char* monthName(enum month month){
    return months[month-1];
}

int main() {

    enum month aMonth = June;
    printf("%s\n", monthName(aMonth));

    return 0;

};
