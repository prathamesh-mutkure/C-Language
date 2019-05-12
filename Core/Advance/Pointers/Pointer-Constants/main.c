#include <stdio.h>

void const_value();
void const_address();
void const_pointer();

int main() {

    const_value();
    const_address();
    const_pointer();

    return 0;
}

void const_value()
{
    /// 1. CONSTANT VALUE

    // The const keyword is used to define a variable as constant
    // We may also suffix a pointer with const keyword
    /// TO prevent the pointed value from being changed

    int val = 100;
    const int *pVal = &val;     // Defined as constant

///  *pVal = 10;
///  This will be illegal operation

    val = 99;
    // However we can still directly change the value of variable val
    // But without using the pointer

    int val2 = 90;

    pVal = &val2;
    // We may also change the const_address stored in the pointer


    /// The only thing we may not do is to use pointer to change value of variable
}

void const_address()
{
    /// 2. CONSTANT ADDRESS
    // We may keep the const_address of constant in following way:

    int num = 50;

    int *const pNum = &num;     // Declaring constant const_address

    int num2 = 100;

//  pNum = &num2;
//  CANNOT change the const_address of Pointer variable

    *pNum = 100;        // Legal
    num = 100;          // Legal

}

void const_pointer()
{
    /// 3. CONSTANT POINTERS
    /// Neither the value nor the address can be changed

    int var = 80;
    const int *const pVar = &var;

    int var2 = 60;
//    pVar = &var2;       // ILLEGAL

//    *pVar = 40;         // ILLEGAL

    /// But we may change the value of variable directly

    var = 10;

}