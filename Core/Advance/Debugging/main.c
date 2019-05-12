#include <stdio.h>

void print(int, int, int);
float average(int, int, int);

int main() {

    int a, b, c;

    printf("\nEnter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    print(a, b, c);


    return 0;
}

void print(int a, int b, int c){
    printf("\nThe average of %d, %d, %d is: %f", a, b, c, average(a, b, c));
}

float average(int a, int b, int c)
{
    int sum;
    sum = a+b+c;

    return ((float)sum/3);
}