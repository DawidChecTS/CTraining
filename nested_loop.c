#include <stdio.h>

int main() {
    int rows;
    int columns;
    char symbols;

    printf("Type in number of rows: ");
    scanf("%d", &rows);

    printf("Type in number of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("Choose your character to be displayed: ");
    scanf("%c", &symbols);

    for(int i = 1; i <= rows; i ++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbols);
        }
        printf("\n");
    }
    
    return 0;
}