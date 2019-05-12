#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int i=0;
    char str[100];

    printf("\nEnter a string less than 100 characters: \n");

    scanf("%s", str);

    while (str[i] != '\0')
    {
        str[i] = (char) toupper(str[i]);
        ++i;
    }

    printf("\nUPPERCASE: %s\n", str);

    i = 0;

    while (str[i] != '\0')
    {
        str[i] = (char) tolower(str[i]);
        ++i;
    }

    printf("\nLOWERCASE: %s\n", str);

    return 0;
}