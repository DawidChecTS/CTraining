#include <stdio.h>
//#include - This is a directive for the C preprocessor, which is a tool that processes
//code before it is compiled.
// <stdio.h> - This specifies the standard I/O library header file.
//<> - Brackets indicate that the file is a system header file and should be 
//looked in the standard library directories

int main(){
    /*
    escape sequence = character combination consisting of a backslash \
                      fallowed by a letter or combination of digits.
                      They specify actions within a line or string of text.
                      /n - newline
                      /t - tab
    */

    printf("I\n like\n to\n learn!\n"); // adding newlines escape sequences
    printf("It is very cool!\n"); // 
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); // adding new tabs and new lines 
    printf("\"This is a duble qute.\" - A dublequeter\n"); // adding a ("") duble qute
    printf("\'This is a single qute.\' - A singlequeter\n"); // adding a ('') single qute
    printf("\\This is a backslash.\\ - A backslacher\n"); // adding a ("") duble qute
    return 0;
}