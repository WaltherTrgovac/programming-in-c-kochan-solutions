#include <stdio.h>

/*
A matrix M with i rows, j columns can be transposed into a matrix N
having j rows and i columns by simply setting the value of Na,b equal to
the value of Mb,a for all relevant values of a and b.
Using variable-length arrays, rewrite the transposeMatrix()
function developed in exercise 12a to take the number of rows and
columns as arguments, and to transpose the matrix of the specified
dimensions.
*/

void transposeMatrix(int row, int col, int M[row][col], int N[col][row]){

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

    int M[4][5] = {
                   {1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20},
                  };
    int N[5][4];

    printf("Transposed Matrix of M:\n");
    transposeMatrix(4, 5, M, N);

    return 0;
}
