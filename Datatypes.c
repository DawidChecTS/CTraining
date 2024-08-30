#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'C';               // single charater - %c
    printf("This is how I can print single character: %c\n", a);

    char b[] = "Dawid";         // array of characters - %s
    printf("This is how I can print an array of characters: %s\n", b);

    float c = 3.141592;         // 4 bytes (32 bits precission) 6 - 7 digits %f
    printf("This is how I can print a float: %f\n", c);
    
    double d = 3.141592123456789; // 8 bytes (64 bits of precission) 15 - 16 digits %lf
    printf("This is how I can print a duble: %0.15lf\n", d);

    bool e = false;           // 1 byte (true or false) %d
    printf("This is how I can print a boolean: %d\n", e);

    char f = 127;             // 1 byte (-128 to +127) %d or %c
    printf("This is how I can print a char: %d\n", f);

    unsigned char g = 255;    // 1 byte (0 to +255) %d or %c 
    printf("This is how I can print an unsigned char: %d\n", g);

    short int h = 32767;      // 2 bytes (-32,768 to + 32,767) %d
    printf("This is how I can print a short int: %d\n", h);     

    unsigned short int i = 65535;  // 2 bytes (0 to +65,535) %d
    printf("This is how I can print an unsigned short int: %d\n", i);

    int j = 2147483647;         // 4 bytes (-2,147,483,648 to + 2,147,483,647) %d
    printf("This is how I can print an int: %d\n", j);

    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u 
    printf("This is how I can print unsigned int: %u\n", k);

    long long int l = 9223372036854775807; // 8 bytes (- 9 quintilion to +9 quintilion) %lld
    printf("This is how I can print long long int: %lld\n", l);

    unsigned long long int m = 18446744073709551615U; // U- for not getting warning
    printf("This is how I can print unsigned long long int: %llu\n", m); // 8 bytes (0 to +18 quintilion) %llu

    return 0;
}