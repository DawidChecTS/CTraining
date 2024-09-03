#include <stdio.h>


void happy_bithday(char x[], int y)
{

    printf("Happy birthday dear %s!\n", x);
    printf("Happy birthday, you are %d years old!\n", y);

}

void multiply(double a, double b)
{

double c = a * b;
printf("Your multiplayed numbers are: %lf\n", c);

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
    multiply(192.88888888888, 48.345);
    divde(289, 2345);

    return 0;
}