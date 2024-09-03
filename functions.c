#include <stdio.h>


void happy_bithday(char x[], int y)
{

    printf("Happy birthday dear %s!\n", x);
    printf("Happy birthday, you are %d years old!\n", y);

}

double square(double b)
{

    double result = b * b;
    return result;

}

void divde(double a, double b)
{

    double division = a / b;
    printf("Your divided numbers are: %lf\n", division);
    
}

int main() 
{

    char name[] = "Dawid";
    int age = 28;

    happy_bithday(name, age);
    double b = square(3.14);
    printf("%lf\n", b);
    divde(289, 2345);

    return 0;
    
}