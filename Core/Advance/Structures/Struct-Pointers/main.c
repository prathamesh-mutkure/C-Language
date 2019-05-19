#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void struct_ptr(void);
void ptr_members(void);
void ptr_str_members(void);

int main() {

    struct_ptr();
    ptr_members();
    ptr_str_members();

    return 0;
}

void struct_ptr()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct date today = {17, 10, 2002};

    struct date *pToday;

    pToday = &today;

    (*pToday).day = 9;

    // This will set the Day pointed by pToday to 10

    /// The *pToday needs to be inside parenthesis, so to point the today variable
    /// Because Dot Operator(.) has higher precedence than Asterik(*)
    /// Without (), the compiler would reference to wrong value

    /// -> OPERATOR
    /// We can also dereference a structure pointer by using the -> Operator

    pToday->month = 10;
    pToday->year = 2012;
}

void ptr_members()
{
    struct pointers
    {
        int *p1;
        int *p2;
    };

    int n1 = 10, n2;

    struct pointers ptr, ptr2;

    ptr.p1 = &n1;
    ptr.p2 = &n2;

    *ptr.p2 = 100;

    printf("\nn1 = %d\tn2 = %d", *ptr.p1, *ptr.p2);

    int num1 = 20, num2 = 200;

    ptr2.p1 = &num1;
    ptr2.p2 = &num2;

    printf("\nn1 = %d\tn2 = %d", *ptr2.p1, *ptr2.p2);
}

void ptr_str_members()
{
    struct names
    {
        char * first;
        char * last;
    };

    struct names mName;

    char temp[100];

    // Inputting fist name
    printf("\nEnter your first name: ");
    fgets(temp, 99, stdin);

    // Allocate memory for first name
    mName.first = calloc(strlen(temp)+1, sizeof(char));

    // Copying temp to first name
    strcpy(mName.first, temp);

    printf("\nEnter last name: ");
    fgets(temp, 99, stdin);

    mName.last = calloc(strlen(temp)+1, sizeof(char));

    strcpy(mName.last, temp);
}