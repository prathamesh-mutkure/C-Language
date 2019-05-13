#include <stdio.h>

int main() {

    // Definition:
    struct date
    {
        int day;
        int month;
        int year;
    } tommrow = {14, 5, 2019};

    // Declaration:
    struct date today;

    // Initialization:
    today.day = 13;
    today.month = 5;
    today.year = 2019;

    struct date birthday = {.day = 17, .month = 10, .year = 2002};

    return 0;
}