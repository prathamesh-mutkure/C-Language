#include <stdio.h>

int main() {

    char ch;
    int count, i;

    // Accessing file
    FILE *file = NULL;
    char *fileName = "//home//prathamesh//Desktop//C-Language//Projects//Files-Reverse-Print//Sample";
    file = fopen(fileName, "r");

    // Error handling
    if (file == NULL)
    {
        perror("\nError opening the file");
        return -1;
    }

    // Getting to the end of the file
    fseek(file, 0, SEEK_END);

    count = ftell(file);

    printf("\n------------------------------------\n\n");

    for (i=0; i<count; i++)
    {
        fseek(file, -i, SEEK_END);
        printf("%c", fgetc(file));
    }

    printf("\n\n------------------------------------\n");

    return 0;
}