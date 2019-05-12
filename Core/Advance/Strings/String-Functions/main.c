#include <stdio.h>
#include <string.h>

/// Here are common String Functions used in C

/*
 * 1. strlen();
 * 2. strcpy(); and strncpy();
 * 3. strcmp();
 * 4.
 */

void len();
void cpy();
void cmp();
void cat();

int main() {

    len();
    cpy();
    cat();
    cmp();

    return 0;
}

void len(){

    int n;

    char str[] = "Hello";

    n = strlen(str);

    printf("\n\nThe size of %s is: %d\n", str, n);

    printf("\n----------------------------\n");
}

void cpy()
{
    // The strcpy() function is used to copy one string over another.
    // Here we are taking a example with equal sized string

    char src[10] = "Hello";
    char dest[10];

    strcpy(dest, src);

    // But what if the source string is larger in size than the destination string?
    // It may produce an error, so to overcome this problem we use:
    // strncpy() function

    char src2[40] = "Hello World! I am learning C";
    char dest2[15] = "Hello world";

    /// strncpy() Function:

    strncpy(dest2, src2, sizeof(dest2)-1);  //

    printf("\n%s\n", dest2);

    printf("\n----------------------------\n");
}

void cat()
{

    // This function join str1 to str2, and store the value in str1
    // And str2 would remain intact

    char str1[] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2);

    printf("\nConcatenated string: %s\n", str1);


    /// strncat() Function:
    // This function can join only specified amounts from str2

    char src1[] = "Hello ";
    char src2[] = "World!";

    strncat(src1, src2, 3);

    printf("\nConcatenated string: %s\n", src1);

    printf("\n----------------------------\n");
}

void cmp()
{

    // strcmp() Function compares two strings
    // Returns 0 if both are equal
    // or returns the difference of ASCII values of first two non equal characters

    char str1[] = "Hello World!";
    char str2[] = "Hello Earth!";

    printf("\n\nReturned value: %d\n", strcmp(str1, str2));


    /// strncmp() Function:
    // The third argument can be used to limit the comparing characters
    // Handy when need to check for prefix

    char src1[] = "Hello World! Save Energy";
    char src2[] = "Hello Earth! Save Trees";

    printf("\n\nReturned value: %d\n", strncmp(src1, src2, sizeof(src1)-3));


    printf("\n----------------------------\n");
}