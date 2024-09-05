#include <stdio.h>

int main () {

    // array = a data structure that can store many values of the sanme data type

    double prices[] = {12.23, 45.00, 76.12, 2.34, 45.99, 12.12};

    printf("%d bytes\n", sizeof(prices)); // how to print the size of the elements inside of array

    printf("%.2lf\n", prices[1]);  // how to print a specific element inside of array
    
    for(int i = 0; i < 5; i++)    
    {
        printf("$%.2lf\n", prices[i]);   // how to write a for loop for printing out all elements 
                                         // within an array
    }
    

    return 0;
}