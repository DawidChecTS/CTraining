#include <stdio.h>
#include <string.h>

int main() {

    char cars[][10] = {"Camaro", "Fiesta", "Polonez"}; // Array of strings

    strcpy(cars[0], "Tesla"); // replacing Camro with Tesla in cars array of strings
                      // (sizeof) operator divided by(sizeof) one of its elements
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){  //For loop goes through all elements inside cars
                                                             // 
        printf("%s\n", cars[i]);  // prints out resault after every iteration
    }
    return 0;
}