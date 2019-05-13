#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// DYNAMIC MEMORY ALLOCATION:
/// In some cases we may want to load data from a file into Arrays, without knowing the size of the data
/// In this case will have to use a Array of maximum possible size
/// OR a Variable length array, which isn't supported in C11
/// AND the last option is to use dynamic memory allocation
/// With which we can allocate memory at run time to our program using pointers

/// malloc(), ralloc(), calloc(), free() are used for the same from stdlib.h Header File

/// Heaps require some more memory than actual, so avoid allocating small sized memory too frequently
/// Always free up memory after use to avoid memory leaks

void Malloc(void);
void Calloc(void);
void Free(void);
void Ralloc(void);

int main() {

    Malloc();
    Free();
    Calloc();
    Ralloc();
    return 0;
}

void Malloc()
{
    /// malloc() stands for Memory Allocation
    /// Used to allocate memory of required size
    /// And returns a Void Pointer with address of first block
    /// And returns NULL if memory allocation fails

    int *pNumber = (int*)malloc(25* sizeof(int));

    // This will allocate space for 25 Integers

    /// But we should be sure if the compiler returns NULL and fails to allocate memory
    /// In this case we need a if() statement to prevent program from crashing
    /// OR at least display an error message
    /// AND EXIT the program

    if (pNumber == NULL)
    {
        // Error code
    }

}

void Free()
{
    /// The memory allocated Dynamically is stored in form of Heap
    /// Means it doesn't get destroyed until the program ends
    /// But we MUST always free memory after it's used, so that other programs can use it
    /// free() function is used for that
    /// We need to pass the pointer which has been allocated memory dynamically

    int *ptr = (int *)malloc(10* sizeof(int));

    free(ptr);

    ptr = NULL;     // Good practice to set pointer to null after being used

    /// It takes a void pointer as parameter, sp we can pass any type of data
    /// This will free up space allocated for *ptr
}

void Calloc()
{
    /// calloc() is almost same as malloc()
    /// But comes with some advantages
    /// 1. It takes the number of elements and size of each element as a parameter
    /// 2. Initializes all the elements

    int *ptr = calloc(25, sizeof(int));

    // This will allocate memory for 25 Integers

    /// And Initialize all numbers to zero

    free(ptr);
    ptr = NULL;
}

void Ralloc()
{
    /// The relloc() function is used to reuse or extend existing allocated memory
    /// It takes two parameter, previously allocated pointer and size to extend in bytes

    char *str;

    // Initial memory allocation
    str = (char *)calloc(15, sizeof(char));       // Allocating 15 elements

    strcpy(str, "google");
    printf("\nString = %s\t|\tAddress = %p\n", str, str);

    str = (char *)realloc(str, 5*sizeof(char));     // Adding more 5 elements to the previously allocated memory

    strcat(str, ".com");
    printf("\nString = %s\t|\tAddress = %p\n", str, str);

    free(str);
}