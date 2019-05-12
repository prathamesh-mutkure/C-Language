#include <stdio.h>

int arraySum(int[], int);

int main() {

    int mArray[10] = {1, 3, 1, 70, 2, 9, 32, 6, 65, 22};
    printf("\nSum of array elements = %d\n", arraySum(mArray, 10));

    return 0;
}

int arraySum(int arr[], int max)
{
    int sum = 0, *ptr;
    int *const arrayEnd = arr+max;

    for (ptr = arr; ptr < arrayEnd; ptr++) {
        sum += *ptr;
    }

    return sum;
}