#include <stdio.h>

/*
A matrix M with i rows, j columns can be transposed into a matrix N
having j rows and i columns by simply setting the value of Na,b equal to
the value of Mb,a for all relevant values of a and b.
Write a function transposeMatrix() that takes as an argument a 4
× 5 matrix and a 5 × 4 matrix. Have the function transpose the 4 × 5
matrix and store the results in the 5 × 4 matrix. Also write a main()
routine to test the function.
*/

void transposeMatrix(int M[4][5], int N[5][4]){

    // transpose matrix
    for (int row = 0; row < 4; row++){
        for (int col = 0; col < 5; col++){
            N[col][row] = M[row][col];
        }
    }

    // display matrix
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 4; col++){
            printf("%i ", N[row][col]);
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
    transposeMatrix(M, N);

    return 0;
}
