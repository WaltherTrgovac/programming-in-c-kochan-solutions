#include <stdio.h>

/*
Find out if your compiler supports variable-length arrays. If it does, write
a small program to test the feature out.
*/

int main() {

    int n;
    printf("How big should your array be?\n");
    scanf("%i", &n);
    int sample[n];

    printf("Your array:\n");
    for (int i = 0; i < n; i++){
        sample[i] = i;
        printf("%i ", sample[i]);
    }

    return 0;

}
