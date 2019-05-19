#include <stdio.h>
#include <stdlib.h>

/// FILE READING:
/// A file must be first opened by fopen() function in order to read it.
/// File can be read by fgetc() Function
///
///     int = fgetc(file-name);
///     fgets(dest_str, max_n, *stream);
///
/// Returns an character read as type Integer
/// Returns EOF if end of file is reached

int main() {

    // Declaring a file
    FILE *file = NULL;

    // Name of the file
    char *fileName = "//home//prathamesh//Desktop//C-Language//Core//Advance//File-Handling//Reading-File//myFile";

    // Opening the file
    file = fopen(fileName, "r+");

    // Printing error message if file doesn't open
    if (file == NULL)
    {
        perror("\nError in opening the File");
        return -1;
    }

    /// READING FILE:

    /// 1. SINGLE CHAR

    int c;

    // Printing file contents
    while ((c  = fgetc(file)) != EOF)
        printf("%c", c);

    // Closing the file
    fclose(file);
    file = NULL;


    /// 2. A STRING

    char str[100];

    file = fopen(fileName, "r+");

    if (file == NULL)
    {
        perror("\nUnable to open the file!");
        return -1;
    }


    /// Using if statement will print until it doesn't get an linefeed

    if ((fgets(str, 99, file)) != NULL)
        printf("%s", str);

    /// While Loop will print everything until EOF or NULL, i.e. until the file ends

    while ((fgets(str, 99, file)) != NULL)
        printf("%s", str);


    fclose(file);
    file = NULL;


    /// FORMATTED INPUT FROM FILE:

    char str1[10], str2[10], str3[10];
    int n;

    file = fopen(fileName, "r+");

    fscanf(file, "%s%s%s%d", str1, str2, str3, &n);

    printf("\n#################################################\n");
    printf("\nString 1: |%s|", str1);
    printf("\nString 2: |%s|", str2);
    printf("\nString 3: |%s|", str3);
    printf("\nInteger : |%d|", n);

    fclose(file);

    return 0;
}