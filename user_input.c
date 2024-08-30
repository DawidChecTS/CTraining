#include <stdio.h>

int main() {

    char name[25]; // 25 bytes - sieze of name array
    int age;

    printf("\nWhat is your name? ");
    //scanf("%s", &name);   // reads input to any white spaces
    fgets(name, 25, stdin); // gets the string from input with spaces stdin
                            // (standard input)

    printf("\nHow old are you? ");
    scanf("%d", &age); // scanf function is used to scan an input
                       // & that is the adress of an operator
                       // can not read white spaces

    printf("\nHello %s, how are you?\n", name);
    printf("\nYou are %d years old!\n", age);

    return 0;
}