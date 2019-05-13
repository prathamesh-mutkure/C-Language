#include <stdio.h>

int main() {

    struct date
    {
        int day;
        int month;
        int year;
    };

    struct time
    {
        int sec;
        int min;
        int hrs;
    };

    struct DateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    struct DateAndTime event = {{17, 10, 2002}, {00, 30, 10}};

    struct DateAndTime event2;

    event2.sdate.day = 10;

    /// We can even create arrays of Event

    /// Declaring Structure within Structure:

    struct employee
    {
        struct details
        {
            int age;
            char name[15];
        } detail;

        int  salary;
        int ID;
    };

    struct employee e1;

    e1.detail.age = 34;

    /// But the inside structure cannot be used outside of the parent structure
    /// So does not exist outside

    return 0;
}