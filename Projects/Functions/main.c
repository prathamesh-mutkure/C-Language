/*
 * CHALLENGE:
 * 1. Function which returns GCD
 * 2. Absolute Value
 * 3. Square Root
 */
#include <stdio.h>
#include <math.h>

void choice(void);
void gcd(void);
void absoluteValue(void);
void squareRoot(void);

int main() {

    int index;
    _Bool exit = 1;

    while (exit)
    {
        choice();

        scanf("%d", &index);

        switch (index)
        {
            case 1:
                gcd();
                break;
            case 2:
                absoluteValue();
                break;
            case 3:
                squareRoot();
                break;
            case 4:
                exit = 0;
                break;
            default:
                printf("\nEnter a default choice!");
                break;
        }
    }

    return 0;
}

void choice()
{
    printf("\nEnter your Choice: ");
    printf("\n1. GCD");
    printf("\n2. Absolute Value");
    printf("\n3. Square Root");
    printf("\n4. Exit!\n");
}

void gcd()
{
    int a, b, gcd=1;

    printf("\nEnter Two numbers: \n");
    scanf("%d%d", &a, &b);

    for (int i = 1; (i<=a && i<=b) ; ++i) {

        if (a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }

    printf("\nGCD of %d and %d is: %d\n\n", a, b, gcd);
}

void absoluteValue()
{
    int num, absoluteVal;

    printf("\nEnter a number: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        absoluteVal = num * -1;
    } else
    {
        absoluteVal = num;
    }

    printf("\nAbsolute value of %d is: %d\n\n", num, absoluteVal);
}

void squareRoot()
{
    double num, sqRoot;

    printf("\n\nEnter a Number: \n");
    scanf("%lf", &num);

    sqRoot = sqrt(num);

    printf("\nSquare Root of %lf is: %lf\n\n", num, sqRoot);
}

