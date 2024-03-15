#include <stdio.h>
#include <stdbool.h>

/*
Why could you have replaced the while statement of the
equalStrings() function of Program 9.4 with the statement
while ( s1[i] == s2[i] && s1[i] != '\0' )
to achieve the same results?
*/

bool equalStrings(const char s1[], const char s2[]){
    int i = 0;
    bool areEqual;

    // If we stop the while loop reaching \0 with s1,
    // then we also have must have reached \0 with s2,
    // if the strings are equal.
    while (s1[i] == s2[i] && s1[i] != '\0'){
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0'){
        areEqual = true;
    } else {
        areEqual = false;
    }

    return areEqual;
}

int main() {

    const char stra[] = {"word1"};
    const char strb[] = {"word1"};

    printf("%i", equalStrings(stra, strb));

    return 0;
};
