#include <stdio.h>
#define YEARS 5
#define MONTH 12

int main() {

    /// A weather program to find total each year, average annual rainfall, and average monthly rainfall
    /// Statistics for 5 years


    // Rain Data
    float rain[5][12] = {

            {30, 20, 31, 19, 22, 36, 15, 26, 46, 14, 28, 36},
            {34, 26, 32, 34, 35, 37, 45, 27, 31, 43, 38, 33},
            {29, 29, 30, 33, 34, 45, 25, 28, 43, 24, 37, 36},
            {34, 24, 34, 36, 28, 28, 44, 36, 46, 34, 45, 28},
            {38, 40, 39, 22, 27, 30, 23, 28, 29, 44, 35, 30}
    };

    // Year and months to keep their track
    int month, year;

    // For final Values:
    float subTotal, total;

    // Indentations:
    printf("\n");
    printf("YEAR\t\tRAIN");

    // Yearly rain:
    for (year = 0, total = 0; year < YEARS; ++year) {
        for (month = 0, subTotal = 0; month  < MONTH; month++) {
            subTotal += rain[year][month];
        }
        printf("\n%3d\t\t\t%.2f", year, subTotal);
        total += subTotal;
    }

    printf("\n\n");

    // Yearly data:
    printf("Total Rainfall = %f", total);
    printf("\nAnnual Average = %f", total/YEARS);

    printf("\n\n");

    // Printing Monthly Data:
    printf("MONTHLY AVERAGES:\n");
    printf("Jan\t\tFeb\t\tMar\t\tApr\t\tMay\t\tJun\t\tJul\t\tAug\t\tSep\t\tOct\t\tNov\t\tDec\n");

    // Monthly Data:
    for (month = 0; month < MONTH; month++) {
        for (year = 0, subTotal = 0; year < YEARS; year++) {
            subTotal = rain[year][month];
        }
        printf("%0.2f    ", subTotal/YEARS);
    }

    printf("\n\n");

    return 0;
}