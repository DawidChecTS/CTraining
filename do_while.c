#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition
    
    char name[50];

    do{
        printf("Type in your name or 'exit' if you wish to exit: ");
        scanf("%s", &name);
        printf("Hello %s!\n", name);
        
    }while(strcmp(name, "exit") != 0); // Keep looking if the name is not exit

    printf("You typed in 'exit', Goodbye!");

    return 0;
}