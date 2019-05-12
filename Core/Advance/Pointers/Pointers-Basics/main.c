/// POINTERS:
/// Pointers are variables which points/stores the address of another variable

/// SYNTAX:
///
///     datatype variableName = value;
///     datatype *pointerName = &variableName;
///                     OR
///     pointerName = &variableName;


#include <stdio.h>

int main() {

    int number = 10;
    int *pNumber = NULL;

    printf("\nNumber's value = %d", number);        // Output Value
    printf("\nNumber's address = %p", &number);     // Output Address

    printf("\n-----------------------------------------------------");

    pNumber = &number;

    printf("\npNumber's Value =  %p", pNumber);
    printf("\npNumber's pointed to =  %d", *pNumber);
    printf("\npNumber's Address =  %p", &pNumber);

    printf("\n-----------------------------------------------------");

    printf("\nNumber's Size = %zd", sizeof(number));
    printf("\npNumber's Size =  %zd", sizeof(pNumber));
    printf("\nPointer's Size =  %zd\n\n", sizeof(*pNumber));


    /// FORMAT SPECIFIERS:
    /// %p ----------> Prints the address of variables

    return 0;
}