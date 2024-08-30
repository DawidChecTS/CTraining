#include <stdio.h>

int main() {

    // arithmetic operations¨

    // + (addiction)
    // - (substraction)
    // * (multiplication)
    // / (division)
    // % (modulus) - remaining of any division 
    // ++ increment - increment value by 1
    // -- decrement - decrement value by 1

    int a = 12;
    int b = 4;
    int c = 2;
    int d = 53;

    int sum = a + b + c;
    int sub = a - b - c;
    int mul = a * b * c;
    int div = a / c;
    float z = d / (float)c;
    int x = d % c;
    

    printf("Sum of int a, b, c is: %d.\n", sum);
    printf("Sub of int a, b, c is: %d.\n", sub);
    printf("Mul of int a, b, c is: %d.\n", mul);
    printf("Div of int a and c is: %d.\n", div);
    printf("Div of int d and c is: %.2f\n", z);
    printf("Modulus of division int d and c is:%d\n", x);

    a++;
    b--;
    
    printf("Incremented value of a is: %d\n", a);
    printf("Decremented value of b is: %d\n", b);


    return 0;
}