#include <stdio.h>

int main() {
    // augument assignemnt operators = used to replace a statement where an operator 
    //                                 takes a variable as one of its arguments
    //                                 and then assigns the restult back to the same 
    //                                 variable:
    //                                 x = x + 1
    //                                 x+=1
    //
    int x = 10;
    x = x + 1;
    x +=1;

    printf("The x is: %d\n", x);
    return 0;
}