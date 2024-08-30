#include <stdio.h>

int main() {
    
    // format specifier % = difines and formats a type of data to be displayed

    // %c = characters
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precission
    // %1 = minimum field width
    // %- = left align
    float item1 = 2.34;
    float item2 = 10.90;
    float item3= 99.99;

    printf("Item 1 costs: $%10.2f\n", item1);
    printf("Item 2 costs: $%-20.2f\n", item3); 
    printf("Item 3 costs: $%30.2f\n", item2); 


    return 0;

}