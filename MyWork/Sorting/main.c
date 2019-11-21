#include <stdio.h>
#include "sort.h"

void printMyArray(int a[], size_t n);

int main() {

    // Array
    int a[] = {1, 3, 75, 23, 56, 64, 34, 6, 3, 534, 4, 32};
    printf("\nArray: ");
    printMyArray(a, sizeof(a)/ sizeof(a[0]));

    // Bubble Sort
    bubbleSort(a, sizeof(a)/ sizeof(a[0]));
    printf("\nBubble Sort: ");
    printMyArray(a, sizeof(a)/ sizeof(a[0]));

    return 0;
}

void printMyArray(int a[], size_t n)
{
    for (int i = 0; i < n; ++i)
        printf("%d\t", a[i]);
    printf("\n");
}