#include <stdio.h>

int main() {

    // For tracking the line feed
    int count = 0;

    // Declaring a file
    FILE *file = NULL;

    char *fileName = "//home//prathamesh//Desktop//C-Language//Projects//Files-Line-Count//Sample";

    // Opening the file
    file = fopen(fileName, "r");

    // Error handling
    if (file == NULL)
    {
        perror("\nError in opening the file\n");
        return -1;
    }

    while (fgetc(file) != EOF)
    {
        if (fgetc(file) == '\n')
            ++count;
        else
            continue;
    }

    fclose(file);

    printf("\nNumber of Lines = %d\n", count);

    return 0;
}