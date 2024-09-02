#include <stdio.h>
#include <stdbool.h>

int main() {
    // logical operators = && (AND) checks if two conditions are true
    //                     || (OR) checks if at least one condition is true
    //                     !  (NOT) reverses the statue of a condition

    float temp = 25;
    bool sunny = true;
    bool clouds = false;

    if (temp >= 0 && temp <= 30 && sunny){
        printf("\nWeather is great, 25 degrees and sunny!");
    }
    if(temp == 300 || sunny == true){
        printf("\nAtleast it is sunny!");
    }
    if (!clouds){
        printf("\nThere are no clauds around!");
    }
    else{
        printf("\nThe weather is bad!");
    }

    return 0;
}