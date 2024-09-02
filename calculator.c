#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Choose one of the operators: (+, -, *, /): ");
    scanf("%c", &operator );

    printf("Type in first number: "); 
    scanf("%lf", &num1);
    printf("Type in the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Your result is: %.2lf", result);
        break;
     case '-':
        result = num1 - num2;
        printf("Your result is: %.2lf", result);
        break;
     case '*':
        result = num1 * num2;
        printf("Your result is: %.2lf", result);
        break;
     case '/':
        result = num1 / num2;
        printf("Your result is: %.2lf", result);
        break;
    
    default:
    printf("Your '%c' is not one of the operators listed above!", operator);
        break;
    }

    return 0;
}