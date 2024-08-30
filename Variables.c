#include <stdio.h>

int main() {

    /* variable = Allocated space in memory to store a value.
                We refer to a variable's name to acces the stored value. 
                That variable now behaves as if it was the value it contains.
                BUT we need to declare what type of data we are storing.

    */

    int x; //declaration
    x = 123; // initialization
    int y = 321;  // declaration + initialization

    int age = 28; // integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; // single charater
    char name[] = "Dawid"; // array of characters

    printf("Hello, %s!\n", name); // %S to print a string
    printf("You are %d years old.\n", age); // %d to print a decimal
    printf("Your averge grade is %c.\n", grade); // %c to print character
    printf("Your gpa is %f.\n", gpa); // %f to print a float
    return 0;
}