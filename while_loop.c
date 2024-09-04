#include <stdio.h>
#include <string.h>

// while loop = repeats a section 0of code possibly unlimted times
// WHILE some conditions remains true
// a while loop might not execute at all

int main ()
{
    
    char name[25];

    printf("\nGive me your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nYou have not typed in your name!\n");
        printf("\nGive me your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("\nYour name is %s", name);


    return 0;
}