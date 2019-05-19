#include <stdio.h>

/// To Access a file we use the fopen() Function
/// fopen() Syntax:
///
///     fopen(*file_name, mode);
///
/// The "mode" here is used to specify the operation to do with the file
///
/// Returns starting address of the file
/// OR NULL if the operation fails

/// FILE LOCATION:
///
/// 1. RELATIVE LOCATION
/// If complete address is not provided then the compiler will assume that the file is in the same directory
/// as in which the program is saved
///
/// 2. ABSOLUTE LOCATION
/// Used when complete address is provided
/// and the file is outside the directory of the program

int main() {

    int n;      // To get return values of Function

    /// ACCESSING/OPENING A FILE:

    FILE *pFile = NULL;                 // Creating a File Pointer
    char *fileName = "myFile.txt";     // Creating a pointer for storing file name

    pFile = fopen(fileName, "r");       // Passing file name and specifying operation to fopen()


    /// CLOSING A FILE:
    /// A file should be closed after use
    /// Returns 0 if operation is successful
    /// Other returns EOF(End Of File) which is basically a -ve Integer value usually -1

    fclose(pFile);


    /// RENAMING A FILE:
    /// Returns zero if operation successful, otherwise a non-zero value

    char *old_name = "ffile.txt";
    char *new_name = "file-renamed.txt";

    n = rename(old_name, new_name);

    if (n)
        printf("\nRenaming Not Successful");
    else
        printf("\nRenaming Successful");


    /// DELETING A FILE:
    /// A file can be deleted by remove() Function



    return 0;
}