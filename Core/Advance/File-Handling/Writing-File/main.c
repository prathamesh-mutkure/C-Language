#include <stdio.h>
#include <stdlib.h>

/// WRITING TO A FILE:
/// SYNTAX:
///     fputc(int ch, FILE *pfile);     OR putc();
///     fputs(str, FILE *pfile);
///
/// Writes the character specified by the first argument to the file in second argument
/// Returns character that was written, if successful
/// Return EOF if failed

int main() {

    int ch;

    FILE *file = NULL;

    char *fileName = "//home//prathamesh//Desktop//C-Language//Core//Advance//File-Handling//Writing-File//myFile";

    file = fopen(fileName, "w+");

    if(file == NULL)
    {
        perror("Failed to open File");
        return -1;
    }

    /// SINGLE CHARACTER:

    for (ch = 33; ch <= 100 ; ch++) {
        fputc(ch, file);
    }

    fclose(file);

    /// WRITING STRING:

    file = fopen(fileName, "w+");

    if(file == NULL)
    {
        perror("Failed to open File");
        return -1;
    }

    fputs("\nI am Writing to this file, using C functions\n", file);


    /// FORMATTED WRITING:
    /// Returns total number of characters written, if successful
    /// Otherwise returns a negative value

    fprintf(file, "%s%s%s%d", "\nHello ", "World! \n", "\nDone with C Language\n\n", 404);

    return 0;
}