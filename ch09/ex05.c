#include <stdio.h>

/*
Write a function called findString() to determine if one character
string exists inside another string. The first argument to the function should
be the character string that is to be searched and the second argument is
the string you are interested in finding. If the function finds the specified
string, have it return the location in the source string where the string was
found. If the function does not find the string, have it return −1. So, for
example, the call
index = findString ("a chatterbox", "hat");
searches the string "a chatterbox" for the string "hat". Because
"hat" does exist inside the source string, the function returns 3 to
indicate the starting position inside the source string where "hat" was
found.
*/

int findString(char word1[], char word2[]){
    int i, j, k;
    int result = -1;

    for (i = 0; word1[i] != '\0'; i++){
        for (k = 0, j = i; word1[k] == word2[j] && word1[j] == '\0'; k++, j++){}
        if (word2[k] == '\0'){
            result = k;
        }
    }

    return result;
}

int main() {

    char word1[] = {"a chatterbox"};
    char word2[] = {"hat"};
    char word3[] = {"no"};
    printf("%i\n", findString(word1, word2));

    return 0;
};
