#include <stdio.h>

/*
Write a pointer version of the sort() function from Chapter 7,
“Working with Functions.” Be certain that pointers are exclusively used
by the function, including index variables in the loops.
*/

void sort(int* a, int n, _Bool ascending){
   int temp;
   int* arrayEnd = a + n;

   for ( ; a < arrayEnd - 1 ; a++ ){
       for (int* b = a + 1; b < arrayEnd; b++ ){
           if (ascending && *a > *b){
               temp = *a;
               *a = *b;
               *b = temp;
           } else if (!ascending && *a < *b){
               temp = *a;
               *a = *b;
               *b = temp;
           }
       }
   }
}

int main() {

    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                     44, -3, -9, 12, 17, 22, 6, 11};

    printf("The array before the sort:\n");
    for (int i = 0; i < 16; i++){
        printf("%i ", array[i]);
    }

    // sorting in ascending order
    sort(array, 16, 1);

    printf("\nThe array after the sorting in the ascending order:\n");
    for (int i = 0; i < 16; i++){
        printf("%i ", array[i]);
    }

    // sorting in descending order
    sort(array, 16, 0);

    printf("\nThe array after the sorting in descending order:\n");
    for (int i = 0; i < 16; i++){
        printf("%i ", array[i]);
    }

    return 0;
};
