#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nSpecify in what scale are you giving me the temp('C') for Celsius and ('F') for Fahrenhait: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter your temperature in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nYour celsius temp in fahrenheit scale is: %.2f", temp);
    }
    else if (unit == 'F'){
        printf("\nEnter your temperature in fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp -32) * 5 /9;
        printf("\nYour fahrenheit temp in celsius scale is: %.2f", temp);
    }
    else{
        printf("\nPlease correct your input.");
    }
    return 0;
}