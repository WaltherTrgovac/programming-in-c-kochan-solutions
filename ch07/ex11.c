#include <stdio.h>

/*
Write a function called arraySum() that takes two arguments: an
integer array and the number of elements in the array. Have the function
return as its result the sum of the elements in the array.
*/

int arraySum(int a[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum+=a[i];
    }

    return sum;
}

int main(){

    int array1[5] = {1, 2, 3, 4, 5};
    int array2[3] = {0, -3, 2};

    printf("The sum of array1 is: %i\n", arraySum(array1, 5));
    printf("The sum of array2 is: %i\n", arraySum(array2, 3));

    return 0;
}
