#include <stdio.h>

int main() {

    int i = 0;

    int values[10] = {1, 2, 3, 4, 500, 6, 32, 8, 9, 2232};

    int *pValues = values;      // No & operator

    // When pointing Arrays we can skip the & operator
    // This will point the first index of array

    // OR

//    *pValues = &values[0];

    while (i<10)
    {
        printf("\nPointer Points: %d", *pValues);
        pValues++;      // Incrementing Address
        i++;
    }

    /// We can use pointer to access an array element
    /// By just manipulating the address it is pointing to
    /// This is the real power of pointers

    return 0;
}