#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;

    // Getting both the files
    FILE *file = NULL;
    FILE *tempFile = NULL;

    char *fileName = "//home//prathamesh//Desktop//C-Language//Projects//File-Uppercase//Sample";
    char *tempName = "//home//prathamesh//Desktop//C-Language//Projects//File-Uppercase//temp";

    char *newName = "//home//prathamesh//Desktop//C-Language//Projects//File-Uppercase//temp.txt";

    // Opening both files
    file = fopen(fileName, "r");
    tempFile = fopen(tempName, "w+");

    if (file == NULL || tempFile == NULL)
    {
        perror("\nError opening the file");
        return -1;
    }

    while ((ch = fgetc(file) != EOF))
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }

            fputc(ch, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    remove(fileName);

    rename(tempName, newName);

    file = fopen(newName, "r");

    while ((ch = fgetc(file) != EOF))
        printf("%c", ch);

    fclose(file);

    return 0;
}