#include <stdio.h>

int main() {

    /// STRUCTURE ARRAYS

    struct date
    {
        int day;
        int month;
        int year;
    };

    struct date birthDay[5] = {{17,10,2002}, {9,10,2012}, {22,10,2015}};    // Initialization

    struct date mDay[5] = {[2] = {9,0,2010}};       // Initializes only 3rd Element

    mDay[4].day = 5;
    mDay[4].month = 5;
    mDay[4].year = 2019;

    struct date holiday = {2,10,2019,17,10,2002,1,1,2019,31,12,2018};   // No Braces

    struct date thatDay[5] = {[1].day = 10, [1].month = 10};    // Only Day and Month of 2nd element


    /// ARRAYS INSIDE STRUCTURE

    struct student
    {
        int ID;
        char name[15];
        int salary;
    };

    struct student s1 = {101, "Sundar", 1000};

    struct student s2;

    s2.ID = 102;
    s2.name[0] = 'J';
    s2.name[1] = 'o';
    s2.name[2] = 'h';
    s2.name[3] = 'n';

    /// Mostly char Arrays or strings are used in Structures

    return 0;
}