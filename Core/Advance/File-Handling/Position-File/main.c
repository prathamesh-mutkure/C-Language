#include <stdio.h>

/// GETTING POSITION IN FILE:
/// Sometimes we need to jump through a file, or get our current location
/// This can be done by:
///     ftell() and fgetpos() Functions
/// SYNTAX:
///
///     long ftell(FILE *pfile);
///
/// ---> Returns long value that specifies current position in the file
///
///     int fgetpos(FILE *pfile, fpos_t *position);
///
/// ---> Returns 0, if successful
/// ---> or non-zero value, if unsuccessful
///
/// Designed to be used with fputpos() Function
/// Second parameter is a pointer defined in stdio.h
/// It is able to record every position within the file
///
///
/// SETTING POSITION IN FILE:
///
///     fseek() and fsetpos() Functions are used
///
///     1. int fseek(FILE *pfile, long offset, int origin);
///
/// The third parameter, reference point can be one of three:
///
///     1. SEEK_SET ---> Defines Begining of the file
///     2. SEEK_CUR ---> Defines Current position in the file
///     1. SEEK_END ---> Defines End of the file
///
/// The second parameter must be value returned by ftell().
/// And the third parameter must be SEEK_SET
///
///
///     2. fsetpos(FILE *file, const fpos_t *position);
///
/// Designed to use with fgetpos() Function
/// Can only be used to go to the position used before
///
/// Whereas fseek() function can be used to go to any position in the file
///

int main() {

    // Accessing File:
    FILE *file = NULL;
    char * fileName = "//home//prathamesh//Desktop//C-Language//Core//Advance//File-Handling//Position-File//myFile";
    file = fopen(fileName, "w+");

    if (file == NULL) {
        perror("Error opening the file!");
        return -1;
    }

    fputs("\nHii There!"
          "\nThis is a sample file for testing File Positioning functions in C11"
          "\nHappy Coding!!", file);

    /// 1. ftell()

    long pos = ftell(file);

    printf("\n%ld\n", pos);

    /// SIZE OF THE FILE:

    int len;

    fseek(file, 0, SEEK_END);   // Getting to the end of file

    len = ftell(file);      // Getting the length

    printf("\nTotal size of the File is: %d bytes\n", len);


    /// 2. fgetpos()

    fpos_t position;    //  Stores the data

    // Not pointer because no memory will be allocated for it

    len = fgetpos(file, &position);

    printf("\nPosition = %d\n", len);

    printf("\n=============================================================\n");


    /// SETTING POSITION

    /// 1. fseek() Function:

    fseek(file, 20, SEEK_SET);
    // This means position should be 7 bytes from the begining of FILE file

    fputs("THIS IS ADDED ON 20th BYTE!!!", file);

    char str[200];

    fseek(file, 0, SEEK_SET);

    while (fgets(str, 199, file) != NULL)
        printf("\n%s\n", str);

    /// 2. fsetpos() Function:

    char s[200];

    fpos_t pos2;            // Holds the position
    fgetpos(file,&pos2);    // Assign the current position

    fsetpos(file, &pos2);   // Setting the position

    // Writing to that Position

    fputs("I AM OVERWRITING YOU!", file);

    printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");

    while (fgets(s, 199, file) != NULL)
        printf("\n%s\n", s);


    fclose(file);



    return 0;
}