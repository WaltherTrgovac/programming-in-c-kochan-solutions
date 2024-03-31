#include <stdio.h>

/*
Rewrite the readLine() function from Chapter 9 so that it uses a
character pointer rather than an array.
*/

void readLine(char* buffer){
    char character;

    do {
        character = getchar();
        *buffer++ = character;
    } while (character != '\n');

    *buffer = '\0';
}

int main() {

    char line[81];

    for (int i = 0; i < 3; i++){
        readLine(line);
        printf("%s\n\n", line);

    }

    return 0;
};
