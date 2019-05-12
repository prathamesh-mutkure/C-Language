#include <stdio.h>

/// PASS BY REFERENCE:
/// We can pass a copy of address to variables
/// So unlike Pass by Value, Change in Formal Parameter will result in change in Actual Parameter
/// This is powerful use of Pointers

/// We can also return multiple values/Arrays
/// By returning initial address
/// And then performing arithmetic on them

void swap(int*, int*);

int main() {

    int a = 10, b = 20;

    printf("\na = %d", a);
    printf("\nb = %d\n", b);

    swap(&a, &b);

    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}