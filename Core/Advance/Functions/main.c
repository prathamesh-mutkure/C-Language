#include <stdio.h>

/// Function Prototype:

int add(int, int);

// Global Variables:
// Can be accessed by any function
// Destroyed when the program ends
int calls = 0;

int main() {

    // Local Variables
    int a = 10, b = 20;
    int c;

    c = add(a, b);
    printf("\nAddition = %d", c);

    printf("\nAddition = %d", add(10, 5));

    // Accessing global variable
    printf("\n\nThe add() function had been called: %d times!\n\n", calls);

    return 0;
}

int add(int a, int b)
{
    // Local and Automatic Variables:
    // Created when function is called
    // Destroyed when function exits.
    int sum = a+b;

    calls++;    // Accessing global variable

    return (sum);
}