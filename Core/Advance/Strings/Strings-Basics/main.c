/*
 * STRINGS IN C
 * Strings in C are basically character arrays
 * So, to declare them, we just need to declare char arrays.
 */

#include <stdio.h>
#define GREET "Welcome!"

void str_ip_op(void);

int main() {

    // Declaration:
    // Initializing inside {}
    char str[6] = {'H', 'e', 'l', 'l', 'o'};

    /// The size of array must be 1 greater than the size of string, to allocate the Null Terminator '\0'
    /// The null terminator marks the end of string

    char name[5];

    // OR by specifying the index:
    name[1] = 'J';
    name[2] = 'o';
    name[3] = 'h';
    name[4] = 'n';

    // OR directly with double quotes:
    char name2[5] = "Jane";

    // OR without specifying the size:
    const char msg[] = "Hello World!";      // Constant String

    // The above way should be preferred to avoid any errors.

    str_ip_op();

    return 0;
}

void str_ip_op(void)
{
    char msg[] = "Hello World!";

    /// Outputting a String

    printf("\nThe message is: %s\n", msg);    // %s for string


    /// Inputting a String

    char n[]="Hii!";

    printf("\nEnter a string: ");
    scanf("%s", n);
    printf("\nThe string is: %s\n", n);

    // But '&' isn't used while inputting a string
    // Because it is basically an array, with different sizes and different locations.

    /// But scanf() function shouldn't be used for inputting a string
    /// Because it wouldn't accept a string after a space

}