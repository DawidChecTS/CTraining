#include <stdio.h>


int main () {

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age < 112){
        printf("You are over 18 years old!");
    }
    else if (age > 0 && age <= 17 ) {
        printf("You are too young to sign up!");
    }    
    else if (age <= 0) {
        printf("You are not born yet!");
    }
    else{
        printf("Invalid format!");
    }

    return 0;
}