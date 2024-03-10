#include <stdio.h>

/*
Rewrite the functions developed in the last four exercises to use global
variables instead of arguments. For example, the preceding exercise
should now sort a globally defined array.
*/

int row = 4;
int col = 5;
int M[4][5] = {
               {1, 2, 3, 4, 5},
               {6, 7, 8, 9, 10},
               {11, 12, 13, 14, 15},
               {16, 17, 18, 19, 20},
              };
int N[5][4];

void transposeMatrix(){

    // transpose matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            N[j][i] = M[i][j];
        }
    }

    // display matrix
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            printf("%i ", N[i][j]);
        }
        printf("\n");
    }

}

int main(){

    printf("Transposed Matrix of M:\n");
    transposeMatrix();

    return 0;
}
