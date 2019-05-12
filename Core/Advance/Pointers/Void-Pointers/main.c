#include <stdio.h>

int main() {

    int i = 10;
    float f = 3.14;
    char ch = 'c';

    void *ptr = NULL;

    ptr = &i;
    printf("\n\ni = %d", *(int *)ptr);

    ptr = &f;
    printf("\nf = %f", *(float *)ptr);

    ptr = &ch;
    printf("\nch = %c\n\n", *(char *)ptr);

    return 0;
}