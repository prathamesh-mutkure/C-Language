#include <stdio.h>

int main() {

    printf("\n");

    // Array Initialization:
    // It is always good idea to initialize the values before using them
    // To avoid getting into problems
    // Or so that we can better track things

    // 1. USING BRACES
    // The values are assigned as per the order index
    int integers[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++) {
        printf("%d\t", integers[i]);
    }
    printf("\n");

    // Below we have more items and less assigned values
    // So, The available values are assigned as per order index
    // And rest other values are set to zero
    int ints[10] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 10; i++) {
        printf("%d\t", ints[i]);
    }
    printf("\n");


    // 2. DESIGNATED INITIALIZERS
    // Allow the users to pick and choose which elements are initialized
    // And rest other become zero
    int numbers[10] = {[1] = 2, [5] = 6, [7] = 8, [9] = 10};

    for (int i = 0; i < 10; i++) {
        printf("%d\t", numbers[i]);
    }
    printf("\n");


    return 0;
}