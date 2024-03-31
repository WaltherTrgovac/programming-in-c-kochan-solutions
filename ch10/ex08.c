#include <stdio.h>

/*
Write a function called sort3() to sort three integers into ascending
order. (This function is not to be implemented with arrays.)
*/

void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

void sort3(int *a, int *b, int *c)
{
    if (*a > *b)
        swap(a, b);
    if (*a > *c)
        swap(a, c);
    if (*b > *c)
        swap(b, c);
}

int main() {
    int a = 3;
    int b = 2;
    int c = 1;
    printf("Before sort: \n");
    printf("%i %i %i", a, b, c);
    printf("\nAfter sort:\n");
    sort3(&a, &b, &c);
    printf("%i %i %i", a, b, c);

    return 0;
};
