#include <stdio.h>

void square(int*);

int main() {

    int num;

    printf("\nEnter a Integer: ");
    scanf("%d", &num);

    square(&num);

    printf("\nThe square is: %d\n", num);

    return 0;
}

void square(int *num)
{
    *num = (*num) * (*num);
}