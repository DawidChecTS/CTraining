#include <stdio.h>

int main() {

    //switch = A more efficient alternative to using manu "else if" statements
    //         allows a value to be tested for equality against many cases
    //break = to exit out of switch if we have a matching case
    //default = (else) if there is no matching cases, default case is executed. 

    char grade;

    printf("What is the grade you got: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("You got an A! Good job!\n");
            break;
        case 'B':
            printf("You got an B! Nice!\n");
            break;
        case 'C':
            printf("You got an C! Cool!\n");
            break;
        case 'D':
            printf("You got an D! You have not failed!\n");
            break;
        case 'F':
            printf("You got an F! You FAIELD!\n");
            break;
        default:
            printf("There are no matching grades!");
    }

    return 0;
}