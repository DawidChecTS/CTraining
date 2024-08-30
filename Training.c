#include <stdio.h>
#include <math.h>


int main() {

    const float number; 

    printf("\nType in a number an I will square it: ");
    scanf("%f", &number);

    float answer = sqrt(number);
    printf("\nThe square of your number is: %.2f.", answer);



    return 0;
}