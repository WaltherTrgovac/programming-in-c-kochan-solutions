#include <stdio.h>
#include <stdbool.h>

/*
The countWords() function from Programs 9.7 and 9.8 incorrectly
counts a word that contains an apostrophe as two separate words. Modify
this function to correctly handle this situation. Also, extend the function to
count a sequence of positive or negative numbers, including any embedded
commas and periods, as a single word.
*/

bool alphabetic(const char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\'') || (c == '"')
    || (c >= '0' && c <= '9') || c == '-' || c == '+'){
        return true;
    } else {
        return false;
    }
}

int countWords(const char string[]){
    int wordCount = 0;
    bool lookingForWord = true;

    for (int i = 0; string[i] != '\0'; i++){
        if (alphabetic(string[i])){
            if (lookingForWord){
                ++wordCount;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }

    return wordCount;
}

int main() {

    const char text1[] = "Well, here goes.";
    const char text2[] = "He's my son";
    const char text3[] = "-951 252 - 333";

    printf("%s has %i words\n", text1, countWords(text1));
    printf("%s has %i words\n", text2, countWords(text2));
    printf("%s has %i words\n", text3, countWords(text3));

    return 0;
};
