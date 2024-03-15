#include <stdio.h>

/*
Write a function called insertString() to insert one character string
into another string. The arguments to the function should consist of the
source string, the string to be inserted, and the position in the source string
where the string is to be inserted. So, the call
insertString (text, "per", 10);
with text as originally defined in the previous exercise, results in the
character string "per" being inserted inside text, beginning at
text[10]. Therefore, the character string "the wrong person" is
stored inside the text array after the function returned.
*/

int stringLength(char s[]){
    int count = 0;
    while (s[count] != '\0'){
        count++;
    }
    return count;
}
// the wrong son
// insertString("the wrong son", "per", 10)
// the wrong person

void insertString(char source[], char insertWord[], int index){
    int len = stringLength(insertWord);
    for (int i = index, k = 0; i < index + len; i++, k++){
        source[i + len] = source[i];
        source[i] = insertWord[k];
    }
}

int main() {
    char text[1000] = "the wrong son";
    insertString(text, "per", 10);
    printf("%s", text);
    return 0;
};
