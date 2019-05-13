#include <stdio.h>
#include <stdlib.h>

/// When using strings, we don't need to dereference the characters

int main() {

    int size;

    char *str = NULL;

    printf("\nEnter size of the string: ");
    scanf("%d", &size);

    str = (char *)malloc((size+1)* sizeof(char));

    if (str != NULL)
    {
        printf("\nEnter a String: ");
        scanf("%s", str);

        printf("\nINPUT:\t%s", str);
    }

    free(str);
    str = NULL;

    return 0;
}