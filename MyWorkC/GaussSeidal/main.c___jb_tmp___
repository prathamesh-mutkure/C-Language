#include <stdio.h>

int main() {

    printf("GAUSS SEIDAL METHOD:\n");

    float x, y, z;
    float a1, b1, c1, d1;
    float a2, b2, c2, d2;
    float a3, b3, c3, d3;

    printf("Enter values: \n");

    /// Input First Equation:
    printf("a1 = ");
    scanf("%f", &a1);
    printf("b1 = ");
    scanf("%f", &b1);
    printf("c1 = ");
    scanf("%f", &c1);
    printf("d1 = ");
    scanf("%f", &d1);
    printf("\n");

    /// Input Second Equation:
    printf("a2 = ");
    scanf("%f", &a2);
    printf("b2 = ");
    scanf("%f", &b2);
    printf("c2 = ");
    scanf("%f", &c2);
    printf("d2 = ");
    scanf("%f", &d2);
    printf("\n");

    /// Input Second Equation:
    printf("a3 = ");
    scanf("%f", &a3);
    printf("b3 = ");
    scanf("%f", &b3);
    printf("c3 = ");
    scanf("%f", &c3);
    printf("d3 = ");
    scanf("%f", &d3);
    printf("\n");

//    x = (1/a1)*(d1 - (b1*y) - (c1*z));
//    y = (1/b2)*(d2 - (a2*x) - (c2*z));
//    z = (1/c3)*(d3 - (a3*x) - (b3*y));

    // 1st Iteration:
//    printf("1st Iteration: ");

    y = 0;
    z = 0;

    x = (1/a1)*(d1 - (b1*y) - (c1*z));
    y = (1/b2)*(d2 - (a2*x) - (c2*z));
    z = (1/c3)*(d3 - (a3*x) - (b3*y));

    // 2nd Iteration:

    x = (1/a1)*(d1 - (b1*y) - (c1*z));
    y = (1/b2)*(d2 - (a2*x) - (c2*z));
    z = (1/c3)*(d3 - (a3*x) - (b3*y));

    // 3rd Iteration:

    x = (1/a1)*(d1 - (b1*y) - (c1*z));
    y = (1/b2)*(d2 - (a2*x) - (c2*z));
    z = (1/c3)*(d3 - (a3*x) - (b3*y));

    printf("\nx = %f", x);
    printf("\ty = %f", y);
    printf("\tz = %f", z);



    return 0;
}