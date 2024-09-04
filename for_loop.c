#include <stdio.h>

int main()
{

    for(int i = 1; i <= 10; i++) // for loop that counts from 1 to 1000 until the number is 10.
    {
        printf("%d\n", i);
    }
    for(int number = 1996; number <= 2024; number++)
    {
        printf("%d One year is gone.\n", number);
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d counting...\n", i);
        if (i == 10){
            	printf("There is a ten\n");
        }
        else
        {
            printf("Not ten yet!\n");
        }
    }
    for (float i = 1.001; i <= 2.000; i += 0.003) 
    {
        printf("%.3f\n", i);
    }

return 0;
}