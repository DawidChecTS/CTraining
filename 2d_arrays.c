#include <stdio.h>

int main() {

    // 2D array = an array, where each element is an entire array
    //            usefull if you need a matrix, grid, or table of data

    /*
    int numbers[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
    };
    */

    int numbers[4][4]; // how to initialize an array

    int rows = sizeof(numbers)/sizeof(numbers[0]); // how to calculate number of rows
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]); // how to calculate number of columns

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3; 
    numbers[0][3] = 4;
    numbers[1][0] = 5; 
    numbers[1][1] = 6; 
    numbers[1][2] = 7; 
    numbers[1][3] = 8;
    numbers[2][0] = 9; 
    numbers[2][1] = 10; 
    numbers[2][2] = 11; 
    numbers[2][3] = 12;
    numbers[3][0] = 13; 
    numbers[3][1] = 14; 
    numbers[3][2] = 15; 
    numbers[3][3] = 16;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}
