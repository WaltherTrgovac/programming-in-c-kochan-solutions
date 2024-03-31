#include <stdio.h>

/*
Rewrite the compareStrings() function from Chapter 9 to use
character pointers instead of arrays.
*/

int compareString(char* s1, char* s2){
    int answer;

    // Here you want to do *s1++ and *s2++ after *s1 == *s2
    // because otherwise you skip the first character
    while (*s1 == *s2 && *s1++ != '\0' && *s2++ != '\0'){
        if (*s1 < *s2){ // s1 < s2
            answer = -1;
        } else if (*s1 == *s2){ // s1 ==  s2
            answer = 0;
        } else { // s1 > s2
            answer = 1;
        }
    }

    return answer;
}

int main() {

    char* s1 = {"exampleLonger"};
    char* s2 = {"example"};

    printf("The result after comparing: %i\n", compareString("example1", "example1"));
    printf("The result after comparing: %i\n", compareString(s1, s2));
    printf("The result after comparing: %i\n", compareString("example", "exampleLonger"));

    return 0;
};
