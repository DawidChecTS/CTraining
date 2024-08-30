#include <stdio.h>
#include <math.h> //this include make it possible to use math function used below

int main() {

    double A = sqrt(9); // square of (ar) - "sqrt" function
    double B = pow(3,4); // raize (arg1 to arg2) - "pow" function
    int C = round(3.1456); // round (arg) - "round" function
    int D = ceil(3.1456); // round a number up (arg) - "ceil" function
    int E = floor(3.99);  // round down (arg) - "floor" function
    double F = fabs(-1023); // how far from zero is (arg) - "fabs" function
    double G = log(3);     // logrythms of (arg) - "log" function
    double H = sin(45);    // sign an (arg) - "sin" function
    double I = cos(45);    // cosign an (arg) - "cos" function
    double J = tan(45);    // tengen an (arg) - "tan" function

    printf("\n%lf", F);

    return 0;
}