#include <stdio.h>

/*
To round off an integer i to the next largest even multiple of another
integer j, the following formula can be used:
Next_multiple = i + j - i % j
Write a program to find the next largest even multiple for the following
values of i and j:
i         j
365       7
12258     23
996       4
*/

void next_multiple(int i, int j){
    printf("The next multiple is: %i\n", i + j - i % j);
    return;
}

int main() {

    int i1 = 365, j1 = 7;
    int i2 = 12258, j2 = 23;
    int i3 = 996, j3 = 4;

    next_multiple(i1, j1);
    next_multiple(i2, j2);
    next_multiple(i3, j3);

    return 0;
}