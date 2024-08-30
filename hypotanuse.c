#include <stdio.h>
#include <math.h>

int main ()  {

    double A;
    double B;
    double C;

    printf("\nEnter value A: ");
    scanf("%lf", &A);

    printf("\nEnter value B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("\nThe hypotanuse of your triangle is: %.3lf", C);

    return 0;
}