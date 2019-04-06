#include <stdio.h>

#define PAYRATE 12.00
#define OVERPAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_450 .20
#define TAXRATE_OTHER .25

int main() {

    int hours, overTime;
    double overPay, grossPay, netPay, tax;

    // Input working hours
    printf("Please enter total number of working hours: ");
    scanf("%d", &hours);

    // 18$/hr Overtime pay
    overTime = hours - 40;

    // Calculates Gross Pay
    if (hours > 40){
        overPay = overTime * OVERPAYRATE;
        grossPay = (40 * PAYRATE) + overPay;
    } else{
        grossPay = hours * PAYRATE;
    }

    // Calculates Tax Rate
    if (grossPay < 300){
        tax = grossPay * TAXRATE_300;
    }
    else if (grossPay > 300 && grossPay < 450){
        tax = 300 * TAXRATE_300;
        tax = tax + ((grossPay - 300) * TAXRATE_450);

    } else {
        tax = 300 * TAXRATE_300;
        tax += 150 * TAXRATE_450;
        tax += tax + ((grossPay - 450) * TAXRATE_OTHER);
    }

    // Pay after taxes
    netPay = grossPay - tax;

    // Printing all the Values
    printf("\nWorking Hours = %.d hours", hours);

    if (hours > 40){
        printf("\nOver Time = %d hours", overTime);
        printf("\nOver Time Pay = %.2lf$", overPay);
    } else {
        printf("\nOver Time = 0 hours");
        printf("\nOver Time Pay = 0$");
    }
    printf("\nGross Pay = %.2lf$", grossPay);
    printf("\nTax Rate = %.2lf$", tax);
    printf("\nNet Pay = %.2lf$", netPay);

    return 0;
}