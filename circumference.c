#include <stdio.h>
#include <math.h>


int main() {

    float pi = 3.14159;
    float radius;

    printf("\nEnter the radius of your circle and I will count it's cricumference: ");
    scanf("%f", &radius);

    float circum = 2 * pi * radius;

    printf("\nThe circumference of your circle is: %.3f.", circum);

    double area = pi * pow(radius, 2);

    printf("\nThe are of your circle is: %.3lf.", area);

    return 0;
}