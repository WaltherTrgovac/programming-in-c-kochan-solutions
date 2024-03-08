#include <stdio.h>

/*
Program 6.2 permits only 20 responses to be entered. Modify that
program so that any number of responses can be entered. So that the user
does not have to count the number of responses in the list, set up the
program so that the value 999 can be keyed in by the user to indicate that
the last response has been entered.
*/

int main() {

    // fill the array with zeros
    int ratingCounters[11] = {0};
    int response;
    int numberOfResponses;
    printf("How many responses do you want?\n");
    scanf("%i", &numberOfResponses);

    for (int i = 0; i < numberOfResponses; i++){
        scanf("%i", &response);
        if (response == 999) {
            break;
        } else if (response < 1 || response > 10){
            printf("Bad response: %i\n", response);
        } else {
            ratingCounters[response]++;
        }
    }

    printf("\n\nRating    Number of Responses\n");
    printf("------    -------------------\n");

    for (int i = 1; i <= 10; i++){
        printf("%2i%14i\n", i, ratingCounters[i]);
    }

    return 0;

}
