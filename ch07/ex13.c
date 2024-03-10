#include <stdio.h>

/*
Modify the sort() function from Program 7.12 to take a third argument
indicating whether the array is to be sorted in ascending or descending
order. Then modify the sort() algorithm to correctly sort the array into
the indicated order.
*/

void sort(int a[], int n, _Bool ascending){

    int temp;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (ascending && a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            } else if (!ascending && a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}

int main(){

    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                     44, -3, -9, 12, 17, 22, 6, 11};

    printf("The array before the sort:\n");
    for (int i = 0; i < 16; i++){
        printf("%i ", array[i]);
    }

    // sorting in ascending order
    sort(array, 16, 1);

    printf("\nThe array after the sorting in ascending order:\n");
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
}
