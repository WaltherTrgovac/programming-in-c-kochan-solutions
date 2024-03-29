#include <stdio.h>

/*
Write a function called removeString() to remove a specified
number of characters from a character string. The function should take
three arguments: the source string, the starting index number in the source
string, and the number of characters to remove. So, if the character array
text contains the string "the wrong son", the call
removeString (text, 4, 6);
has the effect of removing the characters “wrong” (the word “wrong” plus
the space that follows) from the array text. The resulting string inside
text is then "the son".
*/

void removeString(char source[], int start, int count){
    for (int i = start; i < start + count; i++){
        source[i] = '\0';
    }
    return;
}

int main() {

    char text[] = {"the wrong son"};
    removeString(text, 4, 6);

    // this prints "the son"
    for (int i = 0; i < 14; i++){
        printf("%c", text[i]);
    }

    // this prints "the" because printf stops at \n
    printf("\n%s\n", text);


    return 0;
};
