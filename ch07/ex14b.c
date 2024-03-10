#include <stdio.h>

/*
Rewrite the functions developed in the last four exercises to use global
variables instead of arguments. For example, the preceding exercise
should now sort a globally defined array.
*/

int garray1[5] = {1, 2, 3, 4, 5};
int gn = 5;

int arraySum(){
    int sum = 0;

    for (int i = 0; i < gn; i++){
        sum+=garray1[i];
    }

    return sum;
}

int main(){

    printf("The sum of array1 is: %i\n", arraySum());

    return 0;
}
