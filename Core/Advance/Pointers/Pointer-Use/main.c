#include <stdio.h>

void exe1();
void exe2();
void ptr_input();

int main() {

    exe1();
    exe2();
    ptr_input();

    return 0;
}

void exe1()
{
    int num = 10;
    int *pNum = NULL;
    pNum = &num;

    printf("\nInitial Value of num = %d", num);
    printf("\nInitial Value of pNum = %d", *pNum);

    *pNum += 20;    // This will result change in 'num' variable and also to the Pointer *pNum

    // Thus altering the pointer will cause the pointed variable to change
    // And subsequently change the pointer variable

    printf("\n\nFinal Value of num = %d", num);
    printf("\nFinal Value of pNum = %d", *pNum);

    printf("\n\n----------------------------------------------------\n");
}

void exe2()
{
    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;       // Pointing to num1

    *pNum = 2L;         // Setting pNum to 2

    ++num2;             // Incrementing num2
    num2 += *pNum;      // Adding num1 and num2 indirectly

    pNum = &num2;
    ++*pNum;            // Incrementing num2 indirectly

    printf("\nNum1 = %ld", num1);
    printf("\nNum2 = %ld", num2);
    printf("\npNum = %ld", *pNum);

    printf("\n\n----------------------------------------------------\n");
}

void ptr_input()
{
    // When using scanf(), we pass the second parameter as an Pointer
    // by using & operator
    /// But when inputting pointer, we can directly pass it without & operator
    /// Because it is already pointing to a address

    int num;
    int *pNum = &num;

    printf("\nEnter a number: ");
    scanf("%d", pNum);              // No & operator

    printf("\nNum value: %d", num);
    printf("\npNum value: %d", *pNum);
}